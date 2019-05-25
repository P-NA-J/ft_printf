/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/05/25 14:35:01 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "../include/ft_printf.h"
#include "../libft/libft.h"

int					bypass_flag(const char *format)
{
	int i;

	i = 0;
	while (format[i] != 'c' && format[i] != 's' && format[i] != 'p'
	&& format[i] != 'd' && format[i] != 'i' && format[i] != 'o'
	&& format[i] != 'u' && format[i] != 'x' && format[i] != 'X'
	&& format[i] != 'f')
		i += 1;
	return (i);
}






char				*ft_strnpjoinf(char *s1, char *s2, size_t n1, size_t n2)
{
	char	*new_str;

	if (s1 == NULL)
	{
		if (!(new_str = ft_strndup(s2, n2)))
			return (NULL);
	}
	if (!(new_str = (char *)malloc(sizeof(char) * (n1 + n2 + 1))))
		return (NULL);
	ft_memmove(new_str, s1, n1);
	ft_memmove(new_str + n1, s2, n2);
	new_str[n1 + n2] = 0;
	free(s1);
	return (new_str);
}

static char			*substitute(char *s_res, t_plist *list, size_t *len, size_t count)
{
	*len += list->vlc;
	s_res = ft_strnpjoinf(s_res, list->tab, count, list->vlc);
	return (s_res);
}

void				ft_putnstr(char *s, size_t len)
{
	write(1, s, len);
}

unsigned long		print_final(t_plist *list, const char *format)
{
	size_t	len;
	size_t	count;
	char	*s_res;
	char	*ps_f;

	len = 0;
	count = 0;
	ps_f = (char *)format;
	s_res = NULL;
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '%')
		{
			s_res = ft_strnpjoinf(s_res, ps_f, count, format - ps_f);
			s_res = ft_strnpjoinf(s_res, "%", count, 1);
			format += 3;
			count += 1;
			ps_f = (char *)(format);
		}
		else if (*format == '%' && *(format + 1) != '%')
		{
			format += bypass_flag(format);
			s_res = ft_strnpjoinf(s_res, ps_f, count, format - ps_f);
			s_res = substitute(s_res, list, &len, count);
			format += 1;
			list = list->next;
			ps_f = (char *)(format);
		}
		else
		{
			format++;
			count += 1;
		}
	}
	s_res = ft_strnpjoinf(s_res, ps_f, count, format - ps_f);
	ft_putnstr(s_res, count + len);
	return (count + len);
}

int					tab_gen(t_plist *list, va_list arg)
{
	if (list->flag & (1 << 3) || list->flag & (1 << 4))
		return (integer_d_i(list, arg));
	if (list->flag & (1 << 5) || list->flag & (1 << 6)
	|| list->flag & (1 << 7) || list->flag & (1 << 8))
		return (unsigned_u_o_x_bigx(list, arg));
	if (list->flag & C_FLAG)
		return (char_conversion(list, arg));
	if (list->flag & S_FLAG)
		return (string_conversion(list, arg));
	if (list->flag & P_FLAG)
		return (p_conversion(list, arg));
	return (1);
}

int					fill_list(t_plist *list, va_list arg_list)
{
	while (list)
	{
		if (!tab_gen(list, arg_list))
			return (0);
		list = list->next;
	}
	return (1);
}

void				free_list(t_plist *list)
{
	t_plist			*tmp;

	tmp = NULL;
	while (list)
	{
		list->width = 0;
		list->precision = 0;
		list->flag = 0;
		ft_strdel(&(list->tab));
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

int					ft_printf(const char *restrict format, ...)
{
	t_plist			*list;
	va_list			arg_list;
	unsigned long	ret;
	int				count;

	list = NULL;
	ret = 0;
	count = 0;
	va_start(arg_list, format);
	if (!format)
		return (-1);
	if (!(parsing(format, &list, &count)))
		return (-1);
	if (!fill_list(list, arg_list))
		return (-1);
	va_end(arg_list);
	ret = print_final(list, (const char *)format);
	//printf("jokerini\n");
	free_list(list);
	return (ret);
}

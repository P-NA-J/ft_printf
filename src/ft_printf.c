/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/27 15:41:09 by pauljull         ###   ########.fr       */
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

int					bypass_flag(const char *restrict format)
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

unsigned long		print_final(t_plist *list, const char *restrict format)
{
	unsigned long	count;

	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
//			ft_putstr(list->tab);
			printf("%s", list->tab);
			format += bypass_flag(format);
			count += ft_strlen(list->tab) - 1;
			list = list->next;
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format += 1;
//			ft_putstr("%");
			printf("%%");
		}
		else
		{
			printf("%c", *format);
//			ft_putchar(*format);
		}
		format += 1;
		count += 1;
	}
	return (count);
}

int					tab_gen(t_plist *list, va_list arg)
{
	if (list->flag & (1 << 3) || list->flag & (1 << 4))
		return (integer_d_i(list, arg));
	if (list->flag & (1 << 5) || list->flag & (1 << 6)
	|| list->flag & (1 << 7) || list->flag & (1 << 8))
		return (unsigned_u_o_x_bigx(list, arg));
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

	list = NULL;
	ret = 0;
	va_start(arg_list, format);
	if (!format)
		return (-1);
	if (!(parsing(format, &list)))
		return (-1);
	if (!fill_list(list, arg_list))
		return (-1);
	va_end(arg_list);
	ret = print_final(list, format);
	free_list(list);
	return (ret);
}

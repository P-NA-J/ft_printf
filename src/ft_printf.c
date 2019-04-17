/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/11 16:42:53 by pauljull         ###   ########.fr       */
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

void	print_final(const char *restrict format, t_plist *list)
{
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			ft_putstr(list->tab);
			list = list->next;
			while (*format != 'c' && *format != 's' && *format != 'p' && *format != 'd' && *format != 'i' && *format != 'o' && *format != 'u' && *format != 'x' && *format != 'X' && *format != 'f')
				format += 1;
			format += 1;
		}
		ft_putchar(*format);
		format += 1;
	}
}

int 	tab_gen(t_plist *list, va_list arg)
{
	if (list->flag & (1 << 3) || list->flag & (1 << 4))
		return(integer_d_i(list, arg));
	if (list->flag & (1 << 5) || list->flag & (1 << 6) || list->flag & (1 << 7) || list->flag & (1 << 8))
		return (unsigned_u_o_x_X(list, arg));
	return (1);
}

int		fill_list(t_plist *list, va_list arg_list)
{
	while (list)
	{
		if(!tab_gen(list, arg_list))
			return (0);
		list = list->next;
	}
	return (1);
}

int			ft_printf(const char *restrict format, ...)
{
	t_plist	*list;
	va_list	arg_list;
	int 	ret;

	list = NULL;
	va_start(arg_list, format);
	if (!format)
		return (-1);
	if (!(parsing(format, &list)))
		return (-1);
	if (!fill_list(list, arg_list))
		return (-1);
	va_end(arg_list);
	print_final(format, list);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/08 16:07:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "ft_printf.h"

/*
void	fill_list_args(t_list *list, va_list args)
{
	int type;

	while (list)
	{
		type = ft_type(list->flag);
		if (type == 1)
			tab_char(list, args);
		if (type == (1 << 1))
			tab_string(list, args);
		if (type == (1 << 2))
			tab_pointer(list, args);
		if (type == (1 << 3))
			tab_d(list, args);
		if (type == (1 << 4))
			tab_integer(list, args);
		if (type == (1 << 5))
			tab_octal(list, args);
		if (type == (1 << 6))
			tab_unsigned(list, args);
		if (type == (1 << 7))
			tab_hexa_min(list, args);
		if (type == (1 << 8))
			tab_hexa_maj(list, args);
		if (type == (1 << 9))
			tab_float(list, args);
		list = list->next;
	}
}

void	tab_integer(t_list *list, va_list arg_list)
{
	long nb;

	if (list->flag & (1 << 10))
		nb = va_arg(arg_list, long);
	else
		nb = va_arg(arg_list, int);
	if ((1 << 19) & list->flag)
		ft_strcpy(list->tab, )
}

int			ft_printf(const char *restrict format, ...)
{
	t_list	*list;
	va_list	arg_list;

	list = NULL;
	va_start(arg_list, format);
	if (!format)
		return (-1);
	if (!(parsing(format, &list)))
		return (0);
	fill_list(list, arg_list);
	print_final(format, list);
	va_end(arg_list);
	return (1);
}
*/
int		higher_value(int precision, int width, int nb)
{
	if (precision > width)
	{
		if (precision > nb)
			return (precision);
	}
	else if (width > nb)
		return (width);
	else
		return (nb);
	return (0);
}

int 	nb_digit(long n)
{
	unsigned long tmp;
	int value;

	value = 0;
	if(n == 0)
		return (1);
	if (n < 0)
		tmp = -(n);
	else
		tmp = n;
	while (tmp)
	{
		value += 1;
		tmp /= 10;
	}
	return (value);
}

int vlc_process(int flag, int precision, int width, int nb_digit)
{
	int h_val;
	int val;

	h_val = higher_value(list->precision, list->width, nb_digit);
	val = 0;
	if ((flag & (1 << 15)) && (flag & (1 << 5)))
		val += 1;
	if ((flag & (1 << 15)) && ((flag & (1 << 7)) || (flag & (1 << 8))))
		val += 2;
	if (h_val == precision && ((1 << 18) ))
}

int main()
{
	printf("|%+0.0d|\n", 0);
	printf("|%+d|\n", 0);
	return (0);
}

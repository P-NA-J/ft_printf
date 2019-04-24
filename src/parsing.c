/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:34:24 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/23 17:56:16 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "../include/ft_printf.h"

int			is_size(int flag)
{
	int mask;

	mask = 1 << 10;
	while (mask != (1 << 15))
	{
		if (mask & flag)
			return (0);
		mask <<= 1;
	}
	return (1);
}

int			set_option(t_plist *list, const char *restrict format)
{
	if (!is_size(list->flag))
		return (0);
	if (*format == 'L')
		list->flag += MAJL_FLAG;
	else if (*format == 'l')
	{
		if (*(format + 1) == 'l')
			list->flag += MINLL_FLAG;
		else
			list->flag += MINL_FLAG;
	}
	else if (*format == 'h')
	{
		if (*(format + 1) == 'h')
			list->flag += HH_FLAG;
		else
			list->flag += H_FLAG;
	}
	return (1);
}

int			check_step_parse(const char *restrict format, int i, int step)
{
	if (step == 1 && ((format[i] < '1' || format[i] > '9') && format[i] != '.'
	&& format[i] != 'l' && format[i] != 'L' && format[i] != 'h'
	&& format[i] != 'c' && format[i] != 's' && format[i] != 'p'
	&& format[i] != 'd' && format[i] != 'i' && format[i] != 'o'
	&& format[i] != 'u' && format[i] != 'x' && format[i] != 'X'
	&& format[i] != 'f'))
		return (0);
	if (step == 2 && (format[i] != 'l' && format[i] != 'L' && format[i] != 'h'
	&& format[i] != 'c' && format[i] != 's' && format[i] != 'p'
	&& format[i] != 'd' && format[i] != 'i' && format[i] != 'o'
	&& format[i] != 'u' && format[i] != 'x' && format[i] != 'X'
	&& format[i] != 'f'))
		return (0);
	if (step == 3 && (format[i] != 'c' && format[i] != 's' && format[i] != 'p'
	&& format[i] != 'd' && format[i] != 'i' && format[i] != 'o'
	&& format[i] != 'u' && format[i] != 'x' && format[i] != 'X'
	&& format[i] != 'f'))
		return (0);
	return (1);
}

void		correct_parse(t_plist *list)
{
	while (list)
	{
		if (list->flag & ZERO_FLAG)
			if (list->precision || list->flag & MINUS_FLAG)
				list->flag -= ZERO_FLAG;
		if (list->flag & SPACE_FLAG)
			if (list->flag & PLUS_FLAG)
				list->flag -= SPACE_FLAG;
		if (list->flag & MINLL_FLAG)
			list->flag = list->flag - MINLL_FLAG + MINL_FLAG;
		list = list->next;
	}
}

int			parsing(const char *restrict format, t_plist **list_ptr)
{
	int		i;
	t_plist	*list;

	i = 0;
	list = *list_ptr;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			if (!(convert_flag(format, &list, &i)))
				return (0);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			i += 2;
		else
			i += 1;
	}
	correct_parse(list);
	*list_ptr = list;
	return (1);
}

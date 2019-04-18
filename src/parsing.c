/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:34:24 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/18 17:54:53 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "../include/ft_printf.h"

void		convert_option(const char *restrict format, t_plist *list, int *i_ptr)
{
	int i;

	i = *i_ptr;
	while (format[i] == '0' || format[i] == '-' || format[i] == '+'
	|| format[i] == '#' || format[i] == ' ')
	{
		if (format[i] == '#' && !(list->flag & SHARP_FLAG))
			list->flag += SHARP_FLAG;
		if (format[i] == '0' && !(list->flag & ZERO_FLAG))
			list->flag += ZERO_FLAG;
		if (format[i] == ' ' && !(list->flag & SPACE_FLAG))
			list->flag += SPACE_FLAG;
		if (format[i] == '+' && !(list->flag & PLUS_FLAG))
			list->flag += PLUS_FLAG;
		if (format[i] == '-' && !(list->flag & MINUS_FLAG))
			list->flag += MINUS_FLAG;
		i += 1;
	}
	*i_ptr = i;
}

void		convert_lmc_width(const char *restrict format,
							t_plist *list, int *i_ptr)
{
	int i;

	i = *i_ptr;
	if (format[i] >= '1' && format[i] <= '9')
		list->width = ft_atoi(&format[i]);
	while (format[i] >= '0' && format[i] <= '9')
		i += 1;
	if (format[i] == '.')
	{
		i += 1;
		if (format[i] >= '1' && format[i] <= '9')
			list->precision = ft_atoi(&format[i]);
	}
	while (format[i] >= '0' && format[i] <= '9')
		i += 1;
	*i_ptr = i;
}

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

int			convert_size(const char *restrict format,t_plist *list, int *i_ptr)
{
	int i;

	i = *i_ptr;
	if (format[i] == 'L')
		if (!set_option(list, &format[i++]))
			return (0);
	if (format[i] == 'l')
		if (!set_option(list, &format[i++]))
			return (0);
	if (format[i] == 'h')
		if (!set_option(list, &format[i++]))
			return (0);
	if ((list->flag & MINLL_FLAG) || (list->flag & HH_FLAG))
		i += 1;
	*i_ptr = i;
	return (1);
}

void		convert_type(const char *restrict format,t_plist *list, int i)
{
	if (format[i] == 'c')
		list->flag += C_FLAG;
	else if (format[i] == 's')
		list->flag += S_FLAG;
	else if (format[i] == 'p')
		list->flag += P_FLAG;
	else if (format[i] == 'd')
		list->flag += D_FLAG;
	else if (format[i] == 'i')
		list->flag += I_FLAG;
	else if (format[i] == 'o')
		list->flag += O_FLAG;
	else if (format[i] == 'u')
		list->flag += U_FLAG;
	else if (format[i] == 'x')
		list->flag += X_FLAG;
	else if (format[i] == 'X')
		list->flag += BIGX_FLAG;
	else if (format[i] == 'f')
		list->flag += F_FLAG;
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

int			convert_flag(const char *restrict format, t_plist **list_ptr, int *i_ptr)
{
	int		i;
	t_plist	*list;
	t_plist	*head;

	i = *i_ptr + 1;
	list = ft_list_push_back(*list_ptr, 1, 0, 0);
	head = list;
	while (list->next)
		list = list->next;
	convert_option(format, list, &i);
	if (!(check_step_parse(format, i, 1)))
		return (0);
	convert_lmc_width(format, list, &i);
	if (!(check_step_parse(format, i, 2)))
		return (0);
	if (!convert_size(format,list, &i))
		return (0);
	if (!(check_step_parse(format, i, 3)))
		return (0);
	convert_type(format, list, i);
	*i_ptr = i + 1;
	*list_ptr = head;
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

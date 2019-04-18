/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:34:24 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/17 12:06:05 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "../include/ft_printf.h"

void		convert_option(const char *restrict format,unsigned int *flag, int *i_ptr)
{
	int i;

	i = *i_ptr;
	while (format[i] == '0' || format[i] == '-' || format[i] == '+'
	|| format[i] == '#' || format[i] == ' ')
	{
		if (format[i] == '#' && !(*flag & (1 << 15)))
			*flag += (1 << 15);
		if (format[i] == '0' && !(*flag & (1 << 16)))
			*flag += (1 << 16);
		if (format[i] == ' ' && !(*flag & (1 << 17)))
			*flag += (1 << 17);
		if (format[i] == '+' && !(*flag & (1 << 18)))
			*flag += (1 << 18);
		if (format[i] == '-' && !(*flag & (1 << 19)))
			*flag += (1 << 19);
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

int			set_option(unsigned int *flag, int pos, const char *restrict format)
{
	if (!is_size(*flag))
		return (0);
	if (*(format + 1) == *format)
		*flag += (1 << (pos + 1));
	else
		*flag += (1 << pos);
	return (1);
}

int			convert_size(const char *restrict format,unsigned int *flag, int *i_ptr)
{
	int i;

	i = *i_ptr;
	if (format[i] == 'L')
		if (!set_option(flag, 12, &format[i++]))
			return (0);
	if (format[i] == 'l')
		if (!set_option(flag, 10, &format[i++]))
			return (0);
	if (format[i] == 'h')
		if (!set_option(flag, 13, &format[i++]))
			return (0);
	if ((*flag & (1 << 11)) || (*flag & (1 << 14)))
		i += 1;
	*i_ptr = i;
	return (1);
}

void		convert_type(const char *restrict format,unsigned int *flag, int i)
{
	if (format[i] == 'c')
		*flag += (1 << 0);
	else if (format[i] == 's')
		*flag += (1 << 1);
	else if (format[i] == 'p')
		*flag += (1 << 2);
	else if (format[i] == 'd')
		*flag += (1 << 3);
	else if (format[i] == 'i')
		*flag += (1 << 4);
	else if (format[i] == 'o')
		*flag += (1 << 5);
	else if (format[i] == 'u')
		*flag += (1 << 6);
	else if (format[i] == 'x')
		*flag += (1 << 7);
	else if (format[i] == 'X')
		*flag += (1 << 8);
	else if (format[i] == 'f')
		*flag += (1 << 9);
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

int			convert_flag(const char *restrict format, t_plist **list, int *i_ptr)
{
	int		i;
	t_plist	*head;

	i = *i_ptr + 1;
	*list = ft_list_push_back(*list, 1, 0, 0);
	head = *list;
	while ((*list)->next)
		(*list) = (*list)->next;
	convert_option(format, &(*list)->flag, &i);
	if (!(check_step_parse(format, i, 1)))
		return (0);
	convert_lmc_width(format, *list, &i);
	if (!(check_step_parse(format, i, 2)))
		return (0);
	if (!convert_size(format, &(*list)->flag, &i))
		return (0);
	if (!(check_step_parse(format, i, 3)))
		return (0);
	convert_type(format, &(*list)->flag, i);
	*i_ptr = i + 1;
	*list = head;
	return (1);
}

void		correct_parse(t_plist **list_ptr)
{
	t_plist *list;

	list = *list_ptr;
	while (list)
	{
		if (list->flag & (1 << 16))
			if (list->precision || list->flag & (1 << 19))
				list->flag -= (1 << 16);
		if (list->flag & (1 << 17))
			if (list->flag & (1 << 18))
				list->flag -= (1 << 17);
		if (list->flag & (1 << 11))
			list->flag = list->flag - (1 << 11) + (1 << 10);
		list = list->next;
	}
}

int			parsing(const char *restrict format, t_plist **list)
{
	int		i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			if (!(convert_flag(format, list, &i)))
				return (0);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			i += 2;
		else
			i += 1;
	}
	correct_parse(list);
	return (1);
}

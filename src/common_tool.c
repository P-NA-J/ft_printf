/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_tool.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:45:11 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/23 16:58:17 by pauljull         ###   ########.fr       */
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

void			space_filling(char *str, int max)
{
	int			i;

	i = 0;
	while (i < max)
		str[i++] = ' ';
}

void			zero_filling(char *str, int max)
{
	int			i;

	i = 0;
	while (i < max)
		str[i++] = '0';
}

t_plist			*ft_list_push_back(t_plist *list, int width,
				int precision, int flag)
{
	t_plist		*node;
	t_plist		*head;

	head = list;
	if (!(node = (t_plist *)malloc(sizeof(t_plist))))
		return (NULL);
	node->width = width;
	node->precision = precision;
	node->flag = flag;
	node->next = NULL;
	if (!list)
		return (node);
	while (list->next)
		list = list->next;
	list->next = node;
	return (head);
}

int				higher_value(int precision, int width, int nb)
{
	if (precision >= width)
	{
		if (precision >= nb)
			return (precision);
		else
			return (nb);
	}
	else if (width >= nb)
		return (width);
	else
		return (nb);
	return (0);
}

unsigned long	nb_digit(long n)
{
	unsigned long tmp;
	unsigned long value;

	value = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		tmp = -(n);
		value += 1;
	}
	else
		tmp = n;
	while (tmp)
	{
		value += 1;
		tmp /= 10;
	}
	return (value);
}

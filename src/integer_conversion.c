/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:24:01 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/18 18:58:17 by pauljull         ###   ########.fr       */
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

long	tab_integer(t_plist *list, va_list arg)
{
	long nb;

	if (list->flag & MINL_FLAG)
		nb = va_arg(arg, long);
	else
		nb = va_arg(arg, int);
	return (nb);
}

unsigned long vlc_process_di(long nb, t_plist *list)
{
	unsigned long vlc;

	vlc = higher_value(list->precision, list->width, nb_digit(nb));
	if (vlc == nb_digit(nb) || vlc == list->precision)
		if (((list->flag & PLUS_FLAG) && nb >= 0) || ((list->flag & SPACE_FLAG) && nb >= 0))
			vlc += 1;
	if (vlc == list->precision && nb < 0)
		vlc += 1;
	return (vlc);
}

int count_length_di(t_plist *list, long nb)
{
	unsigned int count;

	count = nb_digit(nb);
	if ((list->flag & ZERO_FLAG) && list->width > count)
		count = list->width;
	else if (list->precision > count)
		count = list->precision;
	if ((list->precision == count) && (nb < 0))
		count += 1;
	if (list->flag & PLUS_FLAG && nb >= 0)
		count += 1;
	if (list->flag & SPACE_FLAG && nb >= 0)
		count += 1;
	return (count);
}

char					*ft_itoa_di(long nb, t_plist *list)
{
	char				*str;
	int		count;
	unsigned int		i;
	unsigned long		tmp;

	tmp = 0;
	i = 0;
	count = count_length_di(list, nb);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	zero_filling(str, count);
	str[count] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		tmp = -nb;
	}
	else if (nb >= 0)
		tmp = nb;
	if (nb >= 0 && (list->flag & PLUS_FLAG))
		str[0] = '+';
	if (list->flag & SPACE_FLAG && nb >= 0)
		str[0] = ' ';
	while (count > 0 && str[count - 1] == '0')
	{
		str[count - 1] = '0' + tmp % 10;
		tmp /= 10;
		count -= 1;
	}
	return (str);
}

int			integer_d_i(t_plist *list, va_list arg)
{
	long	nb;
	unsigned int		vlc;

	nb = tab_integer(list, arg);
	vlc = vlc_process_di(nb, list);
	if (!(list->tab = (char *)malloc(sizeof(char) * (vlc + 1))))
		return (0);
	list->tab[vlc] = 0;
	space_filling(list->tab, vlc);
	if (list->flag & MINUS_FLAG)
		ft_strcpy(list->tab, ft_itoa_di(nb,list));
	else
		ft_str_rev_cpy(list->tab, ft_itoa_di(nb,list));
	return (1);
}



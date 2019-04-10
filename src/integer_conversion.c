/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:24:01 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/10 14:27:30 by pauljull         ###   ########.fr       */
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

	if (list->flag & (1 << 10))
		nb = va_arg(arg, long);
	else
		nb = va_arg(arg, int);
	return (nb);
}

int vlc_process_di(long nb, t_plist *list)
{
	int vlc;

	vlc = higher_value(list->precision, list->width, nb_digit(nb));
	if (vlc == nb_digit(nb) || vlc == list->precision)
		if (((list->flag & (1 << 18)) && nb >= 0) || (list->flag & (1 << 17)))
			vlc += 1;
	return (vlc);
}

int count_length(t_plist *list, long nb)
{
	int count;

	count = nb_digit(nb);
	if ((list->flag & 1 << 16) && list->width > count)
		count = list->width;
	else if (list->precision > count)
		count = list->precision;
	if (list->flag & (1 << 18) && nb > 0)
		count += 1;
	return (count);
}

char		*ft_itoa_di(long nb, t_plist *list)
{
	char	*str;
	int		count;
	int		digit;
	unsigned long tmp;

	digit = nb_digit(nb);
	count = count_length(list, nb);
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
	if (nb >= 0 && (list->flag & 1 << 18))
		str[0] = '+';
	while (tmp)
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
	int		vlc;

	nb = tab_integer(list, arg);
	vlc = vlc_process_di(nb, list);
	if (!(list->tab = (char *)malloc(sizeof(char) * (vlc + 1))))
		return (0);
	list->tab[vlc] = 0;
	space_filling(list->tab, vlc);
	if (list->flag & (1 << 19))
		ft_strcpy(list->tab, ft_itoa_di(nb,list));
	else
		ft_str_rev_cpy(list->tab, ft_itoa_di(nb,list));
	ft_putchar('|');
	ft_putstr(list->tab);
	ft_putchar('|');
	ft_putchar('\n');
	return (1);
}


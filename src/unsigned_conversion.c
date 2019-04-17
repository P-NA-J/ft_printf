/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 09:52:32 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/12 15:10:11 by pauljull         ###   ########.fr       */
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

unsigned long		tab_unsigned(t_plist *list, va_list arg)
{
	unsigned long	nb;

	if (list->flag & (1 << 10))
		nb = va_arg(arg, unsigned long);
	else if (list->flag & (1 << 13))
		nb = va_arg(arg, unsigned int);
	else if (list->flag & (1 << 14))
		nb = va_arg(arg, unsigned int);
	else
		nb = va_arg(arg, unsigned int);
	return (nb);
}

int					nb_digit_uoxX(unsigned long nb, t_plist *list)
{
	int				n_dig;

	if (list->flag & (1 << 5))
		n_dig = ft_digit(nb, "01234567");
	else if (list->flag & (1 << 6))
		n_dig = ft_digit(nb, "0123456789");
	else if ((list->flag & (1 << 7)) || (list->flag & (1 << 8)))
		n_dig = ft_digit(nb, "0123456789abcdef");
	return (n_dig);
}

int					vlc_process_uoxX(unsigned long nb, t_plist *list)
{
	int				vlc;
	int				n_dig;

	n_dig = nb_digit_uoxX(nb, list);
	vlc = higher_value(list->precision, list->width, n_dig);
	if ((list->flag & (1 << 5)) && (vlc == n_dig) && (list->flag & (1 << 15)))
		vlc += 1;
	else if (((list->flag & (1 << 7)) || (list->flag & (1 << 8))) && (list->flag & (1 << 15)) && vlc != list->width)
		vlc += 2;
	return (vlc);
}

int					count_length_uoxX(unsigned long nb, t_plist *list)
{
	int				res;

	res = nb_digit_uoxX(nb, list);
	if (list->precision > res)
		res = list->precision;
	else if ((list->flag & (1 << 5)) && (list->flag & (1 << 15)))
			res += 1;
	if (((list->flag & (1 << 7)) || (list->flag & (1 << 8))) && (list->flag & (1 << 15)))
		res += 2;
	return (res);
}

char				*ft_itoa_uoxX(unsigned long nb, t_plist *list)
{
	char			*str;
	char			*head;
	int				len;
	int				count;

	len = nb_digit_uoxX(nb, list);
	count = count_length_uoxX(nb, list);
	printf("len = |%d|\ncount = |%d|\n", len, count);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	head = str;
	zero_filling(str, count);
	str[count] = 0;
	if ((list->flag & (1 << 5)) && (list->flag & (1 << 15)) && ((len + 1) == count))
		*(str++) = '0';
	else if ((list->flag & (1 << 7)) && (list->flag & (1 << 15)))
	{
		ft_strcpy(str, "0x");
		str += 2;
	}
	else if ((list->flag & (1 << 8)) && (list->flag & (1 << 15)))
	{
		ft_strcpy(str, "0X");
		str += 2;
	}
	if (list->precision > len)
		str += list->precision - len;
	if (list->flag & (1 << 5))
		ft_strcpy(str, ft_itoa_base(nb, "01234567"));
	if (list->flag & (1 << 6))
		ft_strcpy(str, ft_itoa(nb));
	if (list->flag & (1 << 7))
		ft_strcpy(str, ft_itoa_base(nb, "0123456789abcdef"));
	if (list->flag & (1 << 8))
		ft_strcpy(str, ft_itoa_base(nb, "0123456789ABCDEF"));
	return (head);
}

int					unsigned_u_o_x_X(t_plist *list, va_list arg)
{
	unsigned long	nb;
	int				vlc;

	nb = tab_unsigned(list, arg);
	vlc = vlc_process_uoxX(nb, list);
	if (!(list->tab = (char *)malloc(sizeof(char) * (vlc + 1))))
		return (0);
	list->tab[vlc] = 0;
	space_filling(list->tab, vlc);
	if (list->flag & (1 << 19))
		ft_strcpy(list->tab, ft_itoa_uoxX(nb,list));
	else
		ft_str_rev_cpy(list->tab, ft_itoa_uoxX(nb,list));
	return (1);
}

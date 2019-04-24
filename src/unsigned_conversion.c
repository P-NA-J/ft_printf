/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 09:52:32 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/24 14:43:20 by pauljull         ###   ########.fr       */
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

	if (list->flag & MINL_FLAG)
		nb = va_arg(arg, unsigned long);
	else if (list->flag & H_FLAG)
		nb = va_arg(arg, unsigned int);
	else if (list->flag & HH_FLAG)
		nb = va_arg(arg, unsigned int);
	else
		nb = va_arg(arg, unsigned int);
	return (nb);
}

unsigned int		nb_digit_uoxbigx(unsigned long nb, t_plist *list)
{
	int				n_dig;

	n_dig = 0;
	if (list->flag & O_FLAG)
		n_dig = nb_digit_base_unsigned(nb, "01234567");
	else if (list->flag & U_FLAG)
		n_dig = nb_digit_base_unsigned(nb, "0123456789");
	else if ((list->flag & X_FLAG) || (list->flag & BIGX_FLAG))
		n_dig = nb_digit_base_unsigned(nb, "0123456789abcdef");
	return (n_dig);
}

int					vlc_process_uoxbigx(unsigned long nb, t_plist *list)
{
	unsigned int				vlc;
	unsigned int				n_dig;

	n_dig = nb_digit_uoxbigx(nb, list);
	vlc = higher_value(list->precision, list->width, n_dig);
	if ((list->flag & O_FLAG) && (vlc == n_dig)
	&& (list->flag & SHARP_FLAG) && nb > 0)
		vlc += 1;
	else if (((list->flag & X_FLAG) || (list->flag & BIGX_FLAG))
	&& (list->flag & SHARP_FLAG) && vlc != list->width)
		vlc += 2;
	return (vlc);
}

int					count_length_uoxbigx(unsigned long nb, t_plist *list)
{
	unsigned int				res;

	res = nb_digit_uoxbigx(nb, list);
	if (list->precision > res)
		res = list->precision;
	else if ((list->flag & O_FLAG) && (list->flag & SHARP_FLAG) && nb > 0)
		res += 1;
	if (((list->flag & X_FLAG) || (list->flag & BIGX_FLAG))
	&& (list->flag & SHARP_FLAG))
		res += 2;
	return (res);
}

void				ft_copy_ouxbigx(t_plist *list, unsigned long nb,
					char *str, unsigned int count)
{
	if ((list->flag & O_FLAG) && (list->flag & SHARP_FLAG)
	&& ((nb_digit_uoxbigx(nb, list) + 1) == count))
		*(str++) = '0';
	else if ((list->flag & X_FLAG) && (list->flag & SHARP_FLAG))
		ft_strcpy(str, "0x");
	else if ((list->flag & BIGX_FLAG) && (list->flag & SHARP_FLAG))
		ft_strcpy(str, "0X");
	if (list->flag & O_FLAG)
		ft_strcpy(str, ft_itoa_base_unsigned(nb, "01234567"));
	if (list->flag & U_FLAG)
		ft_strcpy(str, ft_itoa(nb));
	if (list->flag & X_FLAG)
		ft_strcpy(str, ft_itoa_base_unsigned(nb, "0123456789abcdef"));
	if (list->flag & BIGX_FLAG)
		ft_strcpy(str, ft_itoa_base_unsigned(nb, "0123456789ABCDEF"));
}

char				*ft_itoa_uoxbigx(unsigned long nb, t_plist *list)
{
	char			*str;
	char			*head;
	unsigned int	len;
	unsigned int	count;

	len = nb_digit_uoxbigx(nb, list);
	count = count_length_uoxbigx(nb, list);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	head = str;
	zero_filling(str, count);
	str[count] = 0;
	if (((list->flag & BIGX_FLAG) || ((list->flag & X_FLAG)))
	&& (list->flag & SHARP_FLAG))
		str += 2;
	if (list->precision > len)
		str += list->precision - len;
	ft_copy_ouxbigx(list, nb, str, count);
	return (head);
}

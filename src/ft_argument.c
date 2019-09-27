/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 02:08:30 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:09:44 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int					ft_radical_unsigned(unsigned long nb, int base)
{
	int				res;

	res = 1;
	if (!(nb / base))
		return (1);
	return (res += ft_radical_unsigned(nb / base, base));
}

int					ft_radical_signed(long nb)
{
	int				res;

	res = 1;
	if (!(nb / 10))
		return (1);
	if (nb < 0)
		return (res += ft_radical_signed(-(nb / 10)));
	return (res += ft_radical_signed(nb / 10));
}

unsigned long		ft_arg_unsigned(t_flag *c_arg)
{
	unsigned long	nb;

	if ((c_arg->flag & MINL_FLAG) || (c_arg->flag & P_FLAG))
		nb = (unsigned long)va_arg(c_arg->arg, unsigned long);
	else if (c_arg->flag & H_FLAG)
		nb = (unsigned short)va_arg(c_arg->arg, unsigned int);
	else if (c_arg->flag & HH_FLAG)
		nb = (unsigned char)va_arg(c_arg->arg, unsigned int);
	else if (c_arg->flag & MINLL_FLAG)
		nb = (unsigned long long)va_arg(c_arg->arg, unsigned long long);
	else
		nb = (unsigned int)va_arg(c_arg->arg, unsigned int);
	return (nb);
}

long				ft_arg_signed(t_flag *c_arg)
{
	long			nb;

	if (c_arg->flag & H_FLAG)
		nb = (short)va_arg(c_arg->arg, int);
	else if (c_arg->flag & HH_FLAG)
		nb = (char)va_arg(c_arg->arg, int);
	else if (c_arg->flag & MINL_FLAG)
		nb = (long)va_arg(c_arg->arg, long);
	else if (c_arg->flag & MINLL_FLAG)
		nb = (long long)va_arg(c_arg->arg, long long);
	else
		nb = (int)va_arg(c_arg->arg, int);
	return (nb);
}

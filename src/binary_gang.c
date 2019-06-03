/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_gang.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:50 by pauljull          #+#    #+#             */
/*   Updated: 2019/05/30 03:41:42 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

__uint128_t	u_power(unsigned short pow)
{
	__uint128_t	res;

	res = 2;
	while (--pow > 0)
		res *= 2;
	return (res);
}

void	print_bit_size_t(__uint128_t bin, int size, int pos)
{
	__uint128_t	mask;

	mask = (__uint128_t)1 << (size - 1);
	while (pos)
	{
		if (mask & bin)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask >>= 1;
		pos -= 1;
	}
	write(1, "\n", 1);
}

t_flist	binary_decomposition(va_list arg, int flag, t_flist f_list)
{
	long double ld_f;

	if (flag & MAJL_FLAG)
	{
		ld_f = va_arg(arg, long double);
		f_list.bin = *(__uint128_t *)&ld_f;
		f_list.mantissa = f_list.bin & 0x7fffffffffffffff;
	}
	else if (flag & MINL_FLAG)
	{
		ld_f = (double)va_arg(arg, double);
		f_list.bin = *(__uint128_t *)&ld_f;
		f_list.mantissa =  (f_list.bin >> (63 - 52)) & 0xfffffffffffff;
	}
	else
	{
		ld_f = (float)va_arg(arg, double);
		f_list.bin = *(__uint128_t *)&ld_f;
		f_list.mantissa =  (f_list.bin >> (63 - 23)) & 0x7fffff;
	}
	f_list.bias = 16383;
	f_list.exp = (((f_list.bin >> 64) & 0x7fff) - f_list.bias);
	return (f_list);
}

char	*mantissa_recraft(t_flist f_list, int flag)
{
	char	**tab;
	char	*mant_str;
	int		i;
	unsigned long	mask;

	i = 0;
	tab = floating_tab();
	if (!(mant_str = ft_strnew(1000)))
		return (NULL);
	zero_filling(mant_str, 1000);
	if (f_list.exp)
		ft_strncpy(mant_str, "1.", 2);
	else
		ft_strncpy(mant_str, "0.", 2);
	if (flag & MAJL_FLAG)
		mask = (1UL << 62);
	else if(flag & MINL_FLAG)
		mask = (1UL << 51);
	else
		mask = (1UL << 22);
	while (mask)
	{
		if (f_list.mantissa & mask)
			mant_str = add_str(mant_str, tab[i + 1]);
		i += 1;
		mask >>= 1;
	}
	return (mant_str);
}

char	*f_str_recraft(t_flist f_list, char	*m_str)
{
	char	*f_str;

	f_str = m_str;
	if (f_list.exp < 0)
	{
		f_list.exp *= -1;
		while (f_list.exp > 0)
		{
			f_str = ft_div_str(f_str, 2));
			f_list.exp -= 1;
		}
	}
	else if (f_list.exp > 0)
	{
		while (f_list.exp > 0)
		{
			f_str = mult_str(f_str, 2);
			f_list.exp -= 1;
		}
	}
	printf("%s\n", f_str);
	return (f_str);
}

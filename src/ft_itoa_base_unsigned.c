/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 09:05:49 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/23 16:59:30 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"

unsigned long			power_unsigned(long nb, unsigned long pow)
{
	unsigned long		res;

	res = nb;
	if (pow == 0)
		return (1);
	pow -= 1;
	while (pow > 0)
	{
		res *= nb;
		pow -= 1;
	}
	return (res);
}

unsigned long			power_rank(unsigned long nb, unsigned long len_base)
{
	unsigned long		result;

	result = 0;
	if (nb == 0)
		return (0);
	while (nb / power_unsigned(len_base, result))
		result += 1;
	return (result - 1);
}

int						base_validity(char *base)
{
	char				*tmp;

	if (!base)
		return (0);
	if (ft_strlen(base) == 1)
		return (0);
	while (*base)
	{
		if (*(base + 1))
			tmp = base + 1;
		while (*tmp)
		{
			if (*base == *tmp)
				return (0);
			tmp += 1;
		}
		base += 1;
	}
	return (1);
}

unsigned long			nb_digit_base_unsigned(unsigned long nb, char *base)
{
	unsigned long		base_len;
	unsigned long		count;

	if (nb == 0)
		return (1);
	count = 0;
	base_len = ft_strlen(base);
	while (nb)
	{
		count += 1;
		nb /= 8;
	}
	return (count);
}

char					*ft_itoa_base_unsigned(unsigned long nb, char *base)
{
	char				*str;
	int					n_dig;
	unsigned long		base_len;

	n_dig = nb_digit_base_unsigned(nb, base);
	base_len = ft_strlen(base);
	if (!base_validity(base))
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (n_dig + 1))))
		return (NULL);
	str[n_dig] = 0;
	zero_filling(str, n_dig);
	while (nb)
	{
		str[n_dig - 1] = base[nb % base_len];
		nb /= base_len;
		n_dig -= 1;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:33:58 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/17 11:11:16 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"
#include <stdio.h>

long			power(long nb, unsigned long pow)
{
	long		res;

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

unsigned long		nb_digit_base(long nb, char *base)
{
	unsigned long	base_len;
	unsigned long	count;

	count = 0;
	if (nb < 0)
	{
		count += 1;
	}
	base_len = ft_strlen(base);
	while (nb / power(base_len, count))
		count += 1;
	return (count);
}

char				*ft_itoa_base(long nb, char *base)
{
	char			*str;
	long			dig;
	unsigned long	base_len;
	long	i;

	if (!base_validity(base))
		return (NULL);
	dig = nb_digit_base(nb, base);
	base_len = ft_strlen(base);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (dig + 1))))
		return (NULL);
	str[dig] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		str[1] = base[(-nb / power(base_len, dig - 1))];
		nb += ((-nb / power(base_len, dig - 1))) * power(base_len, dig - 1);
		nb = -nb;
		i = 2;
		dig += 1;
	}
	while (i < dig)
	{
		str[i] = base[(nb / power(base_len, dig - i - 1))];
		nb -= ((nb / power(base_len, dig - i - 1))) * power(base_len, dig - i - 1);
		i += 1;
	}
	return (str);
}

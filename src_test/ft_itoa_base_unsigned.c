/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 09:05:49 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/13 10:52:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int				base_validity(char *base)
{
	char		*tmp;

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

unsigned long		nb_digit_base_unsigned(unsigned long nb, char *base)
{
	unsigned long	base_len;
	unsigned long	count;

	count = 0;
	base_len = ft_strlen(base);
	while (nb / power_unsigned(base_len, count))
		count += 1;
	return (count);
}

char	*ft_itoa_base_unsigned(unsigned long nb, char *base)
{
	char	*str;

	if (!base_validity(base))
		return (NULL);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lmc_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:54:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:37:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_lmc_precision(const char **format, t_flag *c_arg, int state)
{
	if (state == LMC)
	{
		c_arg->lmc = ft_atoi(*format);
		*format += (c_arg->lmc != 0 ? ft_nb_digit(10, "u", c_arg->lmc) : 0);
	}
	else if (**format == '.' && state == PRECISION)
	{
		*format += 1;
		c_arg->precision = ft_atoi(*format);
		while (**format >= '0' && **format <= '9')
			*format += 1;
	}
}

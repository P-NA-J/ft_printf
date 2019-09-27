/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:55:45 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/10 02:14:29 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>

void	ft_error_parse(t_buffer *buff, t_flag *c_arg, char c)
{
	int sup;

	c_arg->radical = 1;
	sup = ft_higher_value(1, c_arg->lmc, UNCHANGED);
	if ((c_arg->flag & MINUS_FLAG))
		ft_write_in_buffer(buff, c, 1);
	if (!(c_arg->flag & MINUS_FLAG) && (c_arg->flag & ZERO_FLAG))
		ft_write_in_buffer(buff, '0', sup - c_arg->radical);
	if (c_arg->lmc != UNCHANGED)
		ft_write_in_buffer(buff, ' ', sup - c_arg->radical);
	if (!(c_arg->flag & MINUS_FLAG))
		ft_write_in_buffer(buff, c, 1);
}

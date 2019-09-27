/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 03:49:42 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:32:53 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_percent_conversion(t_buffer *buff, t_flag *c_arg)
{
	int max;

	max = MAX(c_arg->precision, 1);
	if (!(c_arg->flag & MINUS_FLAG) && !(c_arg->flag & ZERO_FLAG))
		ft_padding(buff, c_arg);
	ft_prefix(buff, c_arg);
	if (c_arg->flag & ZERO_FLAG)
		ft_padding(buff, c_arg);
	if (c_arg->precision > c_arg->radical)
		ft_write_in_buffer(buff, '0', c_arg->precision - c_arg->radical);
	ft_write_in_buffer(buff, '%', 1);
	if (c_arg->flag & MINUS_FLAG && (c_arg->lmc > (max + c_arg->prefix)))
		ft_padding(buff, c_arg);
}

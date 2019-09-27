/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 02:38:59 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:33:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_p_conversion(t_buffer *buff, t_flag *c_arg)
{
	int	max;

	c_arg->flag |= P_FLAG;
	max = ft_pre_conversion(c_arg, 'u', 16);
	if (!(c_arg->flag & MINUS_FLAG) && !(c_arg->flag & ZERO_FLAG))
		ft_padding(buff, c_arg);
	ft_prefix(buff, c_arg);
	if (c_arg->flag & ZERO_FLAG)
		ft_padding(buff, c_arg);
	if (c_arg->precision > c_arg->radical)
		ft_write_in_buffer(buff, '0', c_arg->precision - c_arg->radical);
	if (c_arg->radical)
		ft_convert_to_base(buff, c_arg, 'u', "0123456789abcdef");
	if (c_arg->flag & MINUS_FLAG && (c_arg->lmc > (max + c_arg->prefix)))
		ft_padding(buff, c_arg);
}

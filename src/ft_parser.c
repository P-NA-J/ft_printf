/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:16:10 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/26 20:07:23 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void			ft_correct_parser(t_flag *c_arg)
{
	if (c_arg->flag & PLUS_FLAG)
		if (c_arg->flag & SPACE_FLAG)
			c_arg->flag -= SPACE_FLAG;
	if ((c_arg->flag & MINUS_FLAG) || c_arg->precision != UNCHANGED)
		if (c_arg->flag & ZERO_FLAG)
			c_arg->flag -= ZERO_FLAG;
}

static int		ft_conv_auth(char c)
{
	int			i;

	i = 0;
	while (i < NB_CONV)
	{
		if (c == g_conv_auth[i++])
			return (TRUE);
	}
	return (FALSE);
}

static int		ft_size_auth(char c)
{
	int			i;

	i = 0;
	while (i < NB_SIZE)
	{
		if (c == g_size_auth[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void			ft_parser(const char **format, t_buffer *buff, t_flag *c_arg)
{
	int			i;

	i = 0;
	while (**format && !ft_conv_auth(**format))
	{
		if (ft_size_auth(**format))
			ft_size(format, c_arg);
		else if (ft_opt_auth(**format))
			ft_option(format, c_arg);
		else if (**format >= '1' && **format <= '9')
			ft_lmc_precision(format, c_arg, LMC);
		else if (**format == '.')
			ft_lmc_precision(format, c_arg, PRECISION);
		else
			return ;
	}
	ft_correct_parser(c_arg);
	if (**format)
		while (i < NB_CONV)
			if (**format == g_conv_auth[i++])
				g_f_tab[(int)(**format)](buff, c_arg);
}

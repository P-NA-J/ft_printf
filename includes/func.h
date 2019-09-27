/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:00:52 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:54:29 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H

# define FUNC_H

int				ft_printf(const char *restrict format, ...);
void			ft_parser(const char **format, t_buffer *buff, t_flag *c_arg);
void			ft_write_in_buffer(t_buffer *buff_s, char c, int len);
void			ft_putstr_buffer(t_buffer *buff, char *str, int len);
void			ft_error_parse(t_buffer *buff_s, t_flag *c_arg, char c);
void			ft_flush_buffer(t_buffer *buff);
void			ft_option(const char **format, t_flag *c_arg);
void			ft_lmc_precision(const char **format, t_flag *c_arg, int state);
void			ft_size(const char **format, t_flag *c_arg);
int				ft_opt_auth(char c);
void			ft_convert_to_base(t_buffer *buff, t_flag *c_arg,
				int type, char *b);
unsigned int	ft_order(t_flag *c_arg, char type, int base_l);
long			ft_arg_signed(t_flag *c_arg);
unsigned long	ft_arg_unsigned(t_flag *c_arg);
int				ft_radical_unsigned(unsigned long nb, int base);
int				ft_radical_signed(long nb);
int				ft_pre_conversion(t_flag *c_arg, char type, int base_l);
void			ft_prefix(t_buffer *buff, t_flag *c_arg);
void			ft_padding(t_buffer *buff, t_flag *c_arg);
unsigned long	ft_power_signed(long nb, long pow);
unsigned long	ft_power_unsigned(unsigned long nb, long pow);
void			ft_o_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_u_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_p_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_x_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_bigx_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_d_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_i_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_c_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_s_conversion(t_buffer *buff, t_flag *c_arg);
void			ft_percent_conversion(t_buffer *buff, t_flag *c_arg);
#endif

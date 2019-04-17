/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:01:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/11 16:27:12 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
#include <stdarg.h>

typedef struct		s_plist
{
	void			*args;
	int				width;
	int				precision;
	int				flag;
	char			*tab;
	struct s_plist	*next;
}					t_plist;

int					ft_printf(const char *restrict format, ...);
int					fill_list(t_plist *list, va_list arg_list);
int 				tab_gen(t_plist *list, va_list arg);
void				ft_putendl(char const *s);
int					higher_value(int precision, int width, int nb);
int 				nb_digit(long n);
int					parsing(const char *restrict format, t_plist **list);
void				correct_parse(t_plist **list_ptr);
int					convert_flag(const char *restrict format, t_plist **list, int *i_ptr);
int					check_step_parse(const char *restrict format, int i, int step);
void				convert_type(const char *restrict format, int *flag, int i);
int					convert_size(const char *restrict format, int *flag, int *i_ptr);
int					set_option(int *flag, int pos, const char *restrict format);
int					is_size(int flag);
void				convert_lmc_width(const char *restrict format, t_plist *list, int *i_ptr);
void				convert_option(const char *restrict format, int *flag, int *i_ptr);
int					integer_d_i(t_plist *list, va_list arg);
char				*ft_itoa_di(long nb, t_plist *list);
int					count_length(t_plist *list, long nb);
int					vlc_process_di(long nb, t_plist *list);
long				tab_integer(t_plist *list, va_list arg);
void				space_filling(char *str, int max);
void				zero_filling(char *str, int max);
t_plist				*ft_list_push_back(t_plist *list, int width, int precision, int flag);
char				*ft_strcpy(char *dst, const char *src);
int					ft_atoi(const char *str);
void				ft_str_rev_cpy(char *s1, char *s2);
char				*ft_itoa_base(int nb, char *base);
int					ft_digit(unsigned long nb, char *base);
int					unsigned_u_o_x_X(t_plist *list, va_list arg);
#endif

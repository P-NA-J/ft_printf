/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:01:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/27 15:32:24 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
#define C_FLAG (1 << 0)
#define S_FLAG (1 << 1)
#define P_FLAG (1 << 2)
#define D_FLAG (1 << 3)
#define I_FLAG (1 << 4)
#define O_FLAG (1 << 5)
#define U_FLAG (1 << 6)
#define X_FLAG (1 << 7)
#define BIGX_FLAG (1 << 8)
#define F_FLAG (1 << 9)
#define MINL_FLAG (1 << 10)
#define MINLL_FLAG (1 << 11)
#define MAJL_FLAG (1 << 12)
#define H_FLAG (1 << 13)
#define HH_FLAG (1 << 14)
#define SHARP_FLAG (1 << 15)
#define ZERO_FLAG (1 << 16)
#define SPACE_FLAG (1 << 17)
#define PLUS_FLAG (1 << 18)
#define MINUS_FLAG (1 << 19)
#include <stdarg.h>

typedef struct		s_plist
{
	unsigned int	width;
	int				precision;
	unsigned int	flag;
	char			*tab;
	struct s_plist	*next;
}					t_plist;

int					ft_printf(const char *restrict format, ...);
unsigned long		print_final(t_plist *list, const char *restrict format);
int					fill_list(t_plist *list, va_list arg_list);
int 				tab_gen(t_plist *list, va_list arg);
int					parsing(const char *restrict format, t_plist **list_ptr);
void				correct_parse(t_plist *list);
int					convert_flag(const char *restrict format, t_plist **list_ptr, int *i_ptr);
void				convert_type(const char *restrict format,t_plist *list, int i);
int					convert_size(const char *restrict format,t_plist *list, int *i_ptr);
int					check_step_parse(const char *restrict format, int i, int step);
void				convert_lmc_width(const char *restrict format, t_plist *list, int *i_ptr);
void				convert_option(const char *restrict format, t_plist *list, int *i_ptr);
int					set_option(t_plist *list, const char *restrict format);
int					is_size(int flag);
int					integer_d_i(t_plist *list, va_list arg);
int					unsigned_u_o_x_bigx(t_plist *list, va_list arg);
char				*ft_itoa_di(long nb, t_plist *list);
char				*ft_itoa_uoxbigx(unsigned long nb, t_plist *list);
int					count_length(t_plist *list, long nb);
int					count_length_uoxbigx(unsigned long nb, t_plist *list);
unsigned long		nb_digit(long n);
unsigned int		nb_digit_uoxbigx(unsigned long nb, t_plist *list);
unsigned long		vlc_process_di(long nb, t_plist *list);
int					vlc_process_uoxbigx(unsigned long nb, t_plist *list);
long				tab_integer(t_plist *list, va_list arg);
unsigned long		tab_unsigned(t_plist *list, va_list arg);
void				space_filling(char *str, int max);
void				zero_filling(char *str, int max);
t_plist				*ft_list_push_back(t_plist *list, int width, int precision, int flag);
char				*ft_itoa_base(long nb, char *base);
char				*ft_itoa_base_unsigned(unsigned long nb, char *base);
unsigned long		nb_digit_base_unsigned(unsigned long nb, char *base);
unsigned long		power_unsigned(long nb, unsigned long pow);
int					higher_value(int precision, int width, int nb);
int					ft_digit(unsigned long nb, char *base);
void				ft_putendl(char const *s);
char				*ft_strcpy(char *dst, const char *src);
int					ft_atoi(const char *str);
void				ft_str_rev_cpy(char *s1, char *s2);
#endif

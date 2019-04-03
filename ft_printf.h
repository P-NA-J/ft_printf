/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:01:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/03 22:14:34 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

typedef struct		s_list
{
	void			*args;
	int				width;
	int				precision;
	int				flag;
	char			*tab;
	struct s_list	*next;
}					t_list;

int					ft_printf(const char *restrict format, ...);
void				tab_float(t_list *node);
void				tab_char(t_list *node);
void				tab_string(t_list *node);
void				tab_pointer(t_list *node);
void				tab_integer(t_list *node);
void				tab_octal(t_list *node);
void				tab_hexa(t_list *node);
void				tab_Hexa(t_list *node);
t_list				*parsing(const char *restrict format);
t_list				*ft_list_push_back(t_list *list, int width, int precision, int flag);

#endif

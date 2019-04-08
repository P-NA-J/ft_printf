/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:01:27 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/08 10:29:58 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
#include <stdarg.h>

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
void	tab_integer(t_list *list, va_list arg_list);
int					parsing(const char *restrict format, t_list **list);
t_list				*ft_list_push_back(t_list *list, int width, int precision, int flag);
int					ft_atoi(const char *str);
#endif

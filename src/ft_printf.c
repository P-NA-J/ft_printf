/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/10 14:54:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include "../include/ft_printf.h"
#include "../libft/libft.h"

int 	tab_gen(t_plist *list, va_list arg)
{
	if (list->flag & (1 << 3) || list->flag & (1 << 4))
		return(integer_d_i(list, arg));
	return (1);
}

int		fill_list(t_plist *list, va_list arg_list)
{
	while (list)
	{
		if(!tab_gen(list, arg_list))
			return (0);
		list = list->next;
	}
	return (1);
}

int			ft_printf(const char *restrict format, ...)
{
	t_plist	*list;
	va_list	arg_list;
	int 	ret;

	list = NULL;
	va_start(arg_list, format);
	if (!format)
		return (-1);
	if (!(parsing(format, &list)))
		return (-1);
	if (!fill_list(list, arg_list))
		return (-1);
	va_end(arg_list);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:56:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/03 23:14:05 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"


t_list	*ft_list_push_back(t_list *list, int width, int precision, int flag)
{
	t_list	*node;
	t_list	*head;

	head = list;
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->width = width;
	node->precision = precision;
	node->flag = flag;
	node->next = NULL;
	if (!list)
		return (node);
	while (list->next)
		list = list->next;
	list->next = node;
	return (head);
}
/*
int		convert_flag(const char *restrict format, t_list *list, int *i_ptr)
{
	int i;

	i = *i_ptr;
	list = ft_list_push_back(list, 0, 0, 0)
	while (format[i] != 'c' && format[i] != 's' && format[i] != 'p' && format[i] != 'd' && format[i] != 'i' && format[i] != 'o' && format[i] != 'u' && format[i] != 'x' && format[i] != 'X' && format[i] != 'f')
	{
		if
	}
}

t_list	*parsing(const char *restrict format)
{
	t_list	*list;
	t_list	*tmp;
	int 	i;

	i = 0;
	list = NULL;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
			if (!(convert_flag(format, list, &i)))
				return (NULL);
		else
			i += 1;
	}
}

int	ft_printf(const char *restrict format, ...)
{
	t_list	*list;
	va_list	arg_list;

	if (!format)
		return(-1); // Erreur a renvoyer
	list = parsing(format);
	return (0);
}
*/
int main()
{
	printf("%- 5.6d\n", 56);

	return (0);
}

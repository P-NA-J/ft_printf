/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/05/03 02:22:01 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftft_printf.h"
#include "testft_printf.h"
#include <stdio.h>

void	p_tests(void)
{
	printf("%d\n",ft_printf("%p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%p\n", NULL));
	printf("%d\n",ft_printf("%p\n", (void*)0x0));
	printf("%d\n",ft_printf("%p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%20p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%20p\n", NULL));
	printf("%d\n",ft_printf("%20p\n", (void*)0x0));
	printf("%d\n",ft_printf("%20p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%20p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%20p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%-p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%-p\n", NULL));
	printf("%d\n",ft_printf("%-p\n", (void*)0x0));
	printf("%d\n",ft_printf("%-p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%-p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%-p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%.p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%.p\n", NULL));
	printf("%d\n",ft_printf("%.p\n", (void*)0x0));
	printf("%d\n",ft_printf("%.p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%.p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%.p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%-20p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%-20p\n", NULL));
	printf("%d\n",ft_printf("%-20p\n", (void*)0x0));
	printf("%d\n",ft_printf("%-20p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%-20p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%-20p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%-20.p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%-20.p\n", NULL));
	printf("%d\n",ft_printf("%-20.p\n", (void*)0x0));
	printf("%d\n",ft_printf("%-20.p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%-20.p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%-20.p\n", (void*)-0xfffffffffffff));

	printf("%d\n",ft_printf("%-.p\n", (void*)0x2568a));
	printf("%d\n",ft_printf("%-.p\n", NULL));
	printf("%d\n",ft_printf("%-.p\n", (void*)0x0));
	printf("%d\n",ft_printf("%-.p\n", (void*)0x0000002568a));
	printf("%d\n",ft_printf("%-.p\n", (void*)-0x1));
	printf("%d\n",ft_printf("%-p\n", (void*)-0xfffffffffffff));
}

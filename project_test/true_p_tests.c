/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_p_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 00:35:52 by pauljull          #+#    #+#             */
/*   Updated: 2019/05/03 00:46:43 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	true_p_tests(void)
{
	printf("%d\n", printf("%p\n", (void*)0x2568a));
	printf("%d\n", printf("%p\n", NULL));
	printf("%d\n", printf("%p\n", (void*)0x0));
	printf("%d\n", printf("%p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%p\n", (void*)-0x1));
	printf("%d\n", printf("%p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%20p\n", (void*)0x2568a));
	printf("%d\n", printf("%20p\n", NULL));
	printf("%d\n", printf("%20p\n", (void*)0x0));
	printf("%d\n", printf("%20p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%20p\n", (void*)-0x1));
	printf("%d\n", printf("%20p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%-p\n", (void*)0x2568a));
	printf("%d\n", printf("%-p\n", NULL));
	printf("%d\n", printf("%-p\n", (void*)0x0));
	printf("%d\n", printf("%-p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%-p\n", (void*)-0x1));
	printf("%d\n", printf("%-p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%.p\n", (void*)0x2568a));
	printf("%d\n", printf("%.p\n", NULL));
	printf("%d\n", printf("%.p\n", (void*)0x0));
	printf("%d\n", printf("%.p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%.p\n", (void*)-0x1));
	printf("%d\n", printf("%.p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%-20p\n", (void*)0x2568a));
	printf("%d\n", printf("%-20p\n", NULL));
	printf("%d\n", printf("%-20p\n", (void*)0x0));
	printf("%d\n", printf("%-20p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%-20p\n", (void*)-0x1));
	printf("%d\n", printf("%-20p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%-20.p\n", (void*)0x2568a));
	printf("%d\n", printf("%-20.p\n", NULL));
	printf("%d\n", printf("%-20.p\n", (void*)0x0));
	printf("%d\n", printf("%-20.p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%-20.p\n", (void*)-0x1));
	printf("%d\n", printf("%-20.p\n", (void*)-0xfffffffffffff));

	printf("%d\n", printf("%-.p\n", (void*)0x2568a));
	printf("%d\n", printf("%-.p\n", NULL));
	printf("%d\n", printf("%-.p\n", (void*)0x0));
	printf("%d\n", printf("%-.p\n", (void*)0x0000002568a));
	printf("%d\n", printf("%-.p\n", (void*)-0x1));
	printf("%d\n", printf("%-p\n", (void*)-0xfffffffffffff));

	printf("|%20p|\n", (void*)0xffffffffffffffff);

}

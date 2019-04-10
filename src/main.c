/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:49:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/10 14:57:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("|%+-d||%-5.2i|\n", 12345, 123456789);
	printf("|%+-d|\n|%-5.2i|\n\n", 12345, 123456789);

	ft_printf("|%+-hhi|\n", (char)-123);
	printf("|%+-hhi|\n\n", (char)-123);

	ft_printf("|%+-10hi|\n", (short)12345);
	printf("|%+-10hi|\n\n", (short)12345);

	ft_printf("|%+-.10hd|\n", (short)12345);
	printf("|%+-.10hd|\n\n", (short)12345);

	ft_printf("|%+-8.10hd|\n", (short)12345);
	printf("|%+-8.10hd|\n\n", (short)12345);

	ft_printf("|%+-10.8hd|\n", (short)12345);
	printf("|%+-10.8hd|\n\n", (short)12345);
	return (0);
}

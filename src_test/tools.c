/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:19:36 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/10 14:48:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putnbr(unsigned int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	print_flag_c(int option)
{
	if (option == 1)
		ft_putstr("c ");
	if (option == (1 << 1))
		ft_putstr("s ");
	if (option == (1 << 2))
		ft_putstr("p ");
	if (option == (1 << 3))
		ft_putstr("d ");
	if (option == (1 << 4))
		ft_putstr("i ");
	if (option == (1 << 5))
		ft_putstr("o ");
	if (option == (1 << 6))
		ft_putstr("u ");
	if (option == (1 << 7))
		ft_putstr("x ");
	if (option == (1 << 8))
		ft_putstr("X ");
	if (option == (1 << 9))
		ft_putstr("f ");
	if (option == (1 << 10))
		ft_putstr("l ");
	if (option == (1 << 11))
		ft_putstr("ll ");
	if (option == (1 << 12))
		ft_putstr("L ");
	if (option == (1 << 13))
		ft_putstr("h ");
	if (option == (1 << 14))
		ft_putstr("hh ");
	if (option == (1 << 15))
		ft_putstr("# ");
	if (option == (1 << 16))
		ft_putstr("0 ");
	if (option == (1 << 17))
		ft_putstr("ESP ");
	if (option == (1 << 18))
		ft_putstr("+ ");
	if (option == (1 << 19))
		ft_putstr("- ");
}

void	print_flag(int flag)
{
	unsigned int mask;

	mask = 1 << 31;
	while (mask)
	{
		if (mask & flag)
			print_flag_c(mask & flag);
		mask >>= 1;
	}
	ft_putstr("\n\n");
}

void	print_list(t_plist *list)
{
	int args;

	args = 1;
	while (list)
	{
		printf("#### ARGUMENT No %d ####\n\n", args++);
		printf("LMC : %d\n", list->width);
		printf("precision : %d\n", list->precision);
		printf("binary flag : %d\n\n", list->flag);
		print_flag(list->flag);
		printf("########################\n\n");
		list = list->next;
	}
}


int			bit_value(int bin, int pos)
{
	int mask;

	mask = 1 << pos;
	if (bin & mask)
		return (1);
	else
		return (0);
}

void	print_bit_int(unsigned int bin)
{
	unsigned int mask;

	mask = 1 << 31;
	ft_putnbr(mask);
	ft_putchar('\n');
	while (mask)
	{
		if (mask & bin)
			write(1, "1", 1);
		else
			write (1, "0", 1);
		mask >>= 1;
	}
	ft_putchar('\n');
}

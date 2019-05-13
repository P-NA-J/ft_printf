/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/29 11:49:32 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "testft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%d\n",ft_printf("%c\n", 42));
	printf("%d\n",ft_printf("%c\n", 0));
	printf("%d\n",ft_printf("%c\n", -42));
	printf("%d\n",ft_printf("%-c\n", 42));
	printf("%d\n",ft_printf("%-c\n", 0));
	printf("%d\n",ft_printf("%-c\n", -42));

// -------- repetitive options ----------

	printf("%d\n",ft_printf("%---------------c\n", 42));
	printf("%d\n",ft_printf("%---------------c\n", 0));
	printf("%d\n",ft_printf("%---------------c\n", -42));

// ---------- LMC & precision ---------

	printf("%d\n",ft_printf("%3c", 42));
	printf("%d\n",ft_printf("%3c", 0));
	printf("%d\n",ft_printf("%3c", -42));

// --------- sizes ----------

	printf("%d\n",ft_printf("%lc\n", 42));
	printf("%d\n",ft_printf("%lc\n", 0));
	printf("%d\n",ft_printf("%lc\n", -42));

// ---------- repetitive conversions --------

	printf("%d\n",ft_printf("%c%c%c\n", 42, 0, -42));
	printf("%d\n",ft_printf("%c    %c           %c\n", 42, 0, -42));
	printf("%d\n",ft_printf("%c% c%c\n", 42, 0, -42));
	printf("%d\n", ft_printf("%lc%c\n", 42, -42));

// ---------- Limit ----------
	printf("%d\n", ft_printf("%c\n", CHAR_BIT));
	printf("%d\n", ft_printf("%c\n", SCHAR_MIN));
	printf("%d\n", ft_printf("%c\n", SCHAR_MAX));
	printf("%d\n", ft_printf("%c\n", UCHAR_MAX));
	printf("%d\n", ft_printf("%c\n", CHAR_MAX));

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigx_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 10:47:29 by darbib            #+#    #+#             */
/*   Updated: 2019/04/29 12:40:23 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"
#include <limits.h>

void bigx_tests()
{
	printf("-------- conversion X ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",ft_printf("%X\n", 42));
	printf("%d\n",ft_printf("%X\n", 0));
	printf("%d\n",ft_printf("%X\n", -42));
	printf("%d\n",ft_printf("%0X\n", 42));
	printf("%d\n",ft_printf("%0X\n", 0));
	printf("%d\n",ft_printf("%0X\n", -42));
	printf("%d\n",ft_printf("%#X\n", 42));
	printf("%d\n",ft_printf("%#X\n", 0));
	printf("%d\n",ft_printf("%#X\n", -42));
	printf("%d\n",ft_printf("%-X\n", 42));
	printf("%d\n",ft_printf("%-X\n", 0));
	printf("%d\n",ft_printf("%-X\n", -42));

// -------- repetitive options ----------

	printf("------- n_options --------\n");
	printf("%d\n",ft_printf("%---------------X\n", 42));
	printf("%d\n",ft_printf("%---------------X\n", 0));
	printf("%d\n",ft_printf("%---------------X\n", -42));
	printf("%d\n",ft_printf("%###############X\n", 42));
	printf("%d\n",ft_printf("%###############X\n", 0));
	printf("%d\n",ft_printf("%###############X\n", -42));
	printf("%d\n",ft_printf("%00000000000000000000X\n", 42));
	printf("%d\n",ft_printf("%00000000000000000000X\n", 0));
	printf("%d\n",ft_printf("%00000000000000000000X\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",ft_printf("%########--------X\n", 42));
	printf("%d\n",ft_printf("%########--------X\n", 0));
	printf("%d\n",ft_printf("%########--------X\n", -42));
	printf("%d\n",ft_printf("%--------########X\n", 42));
	printf("%d\n",ft_printf("%--------########X\n", 0));
	printf("%d\n",ft_printf("%--------########X\n", -42));
	printf("%d\n",ft_printf("%########00000000X\n", 42));
	printf("%d\n",ft_printf("%########00000000X\n", 0));
	printf("%d\n",ft_printf("%########00000000X\n", -42));
	printf("%d\n",ft_printf("%00000000########X\n", 42));
	printf("%d\n",ft_printf("%00000000########X\n", 0));
	printf("%d\n",ft_printf("%00000000########X\n", -42));

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",ft_printf("%3X\n", 42));
	printf("%d\n",ft_printf("%3X\n", 0));
	printf("%d\n",ft_printf("%3X\n", -42));
	printf("%d\n",ft_printf("%.7X\n", 42));
	printf("%d\n",ft_printf("%.7X\n", 0));
	printf("%d\n",ft_printf("%.7X\n", -42));
	printf("%d\n",ft_printf("%3.7X\n", 42));
	printf("%d\n",ft_printf("%3.7X\n", 0));
	printf("%d\n",ft_printf("%3.7X\n", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",ft_printf("%hX\n", (short)42));
	printf("%d\n",ft_printf("%hX\n", (short)0));
	printf("%d\n",ft_printf("%hX\n", (short)-42));
	printf("%d\n",ft_printf("%hhX\n", (char)42));
	printf("%d\n",ft_printf("%hhX\n", (char)0));
	printf("%d\n",ft_printf("%hhX\n", (char)-42));
	printf("%d\n",ft_printf("%lX\n", (long)42));
	printf("%d\n",ft_printf("%lX\n", (long)0));
	printf("%d\n",ft_printf("%lX\n", (long)-42));
	printf("%d\n",ft_printf("%llX\n", (long long)42));
	printf("%d\n",ft_printf("%llX\n", (long long)0));
	printf("%d\n",ft_printf("%llX\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",ft_printf("%X%X%X\n", 42, 0, -42));
	printf("%d\n",ft_printf("%X    %X           %X\n", 42, 0, -42));
	printf("%d\n",ft_printf("%#X%-10X%0X\n", 42, 0, -42));
	printf("%d\n",ft_printf("%lX%hX%X\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", ft_printf("%-10.3llX\n people waiting\n", (long long)100));
//	printf("%d\n", ft_printf("time before world end : %2147483647.15hX days\n", (short)0));
	printf("%d\n", ft_printf("%.2X\n", 42));
	printf("%d\n", ft_printf("%010.3llX\n", (long long)42));
	printf("%d\n", ft_printf("0%0.2X0\n", 42));
	printf("%d\n", ft_printf("%-5.6llX%03.7hX%X%%X%7X%XX\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", ft_printf("%05.9lX%-6.10X%X%%X%7X%XX\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", ft_printf("%%X%XX%XX%%X\n", 1, 2));
	printf("%d\n", ft_printf("%%X%%X%%X%%X\n"));
	printf("%d\n", ft_printf("this is red : %X%%X%%X%%X%%X\n", 255));

// ------------- limit ---------------

	printf("------- limit --------\n");
	printf("%d\n", ft_printf("%X\n", CHAR_BIT));
	printf("%d\n", ft_printf("%hhX\n", (char)CHAR_BIT));
	printf("%d\n", ft_printf("%X\n", SCHAR_MIN));
	printf("%d\n", ft_printf("%hhX\n", (char)SCHAR_MIN));
	printf("%d\n", ft_printf("%X\n", SCHAR_MAX));
	printf("%d\n", ft_printf("%hhX\n", (char)SCHAR_MAX));
	printf("%d\n", ft_printf("%X\n", UCHAR_MAX));
	printf("%d\n", ft_printf("%hhX\n", (char)UCHAR_MAX));
	printf("%d\n", ft_printf("%X\n", CHAR_MIN));
	printf("%d\n", ft_printf("%hhX\n", (char)CHAR_MIN));
	printf("%d\n", ft_printf("%X\n", SHRT_MIN));
	printf("%d\n", ft_printf("%hX\n", (short)SHRT_MIN));
	printf("%d\n", ft_printf("%X\n", SHRT_MAX));
	printf("%d\n", ft_printf("%hX\n", (short)SHRT_MAX));
	printf("%d\n", ft_printf("%hX\n", (short)USHRT_MAX));
	printf("%d\n", ft_printf("%X\n", INT_MIN));
	printf("%d\n", ft_printf("%X\n", INT_MAX));
	printf("%d\n", ft_printf("%X\n", UINT_MAX));
	printf("%d\n", ft_printf("%X\n", (int)UINT_MAX));
	printf("%d\n", ft_printf("%lX\n", LONG_MIN));
	printf("%d\n", ft_printf("%lX\n", (long)LONG_MIN));
	printf("%d\n", ft_printf("%lX\n", LONG_MAX));
	printf("%d\n", ft_printf("%lX\n", (long)LONG_MAX));
	printf("%d\n", ft_printf("%lX\n", ULONG_MAX));
	printf("%d\n", ft_printf("%lX\n", (long)ULONG_MAX));
	printf("%d\n", ft_printf("%lX\n", (unsigned long)ULONG_MAX));
}

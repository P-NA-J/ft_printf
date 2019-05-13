/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 10:28:52 by darbib            #+#    #+#             */
/*   Updated: 2019/04/29 13:18:17 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"
#include <limits.h>

void x_tests()
{
	printf("-------- conversion x ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",ft_printf("%x\n", 42));
	printf("%d\n",ft_printf("%x\n", 0));
	printf("%d\n",ft_printf("%x\n", -42));
	printf("%d\n",ft_printf("%0x\n", 42));
	printf("%d\n",ft_printf("%0x\n", 0));
	printf("%d\n",ft_printf("%0x\n", -42));
	printf("%d\n",ft_printf("%#x\n", 42));
	printf("%d\n",ft_printf("%#x\n", 0));
	printf("%d\n",ft_printf("%#x\n", -42));
	printf("%d\n",ft_printf("%-x\n", 42));
	printf("%d\n",ft_printf("%-x\n", 0));
	printf("%d\n",ft_printf("%-x\n", -42));

// -------- repetitive options ----------

	printf("------- n_options --------\n");
	printf("%d\n",ft_printf("%---------------x\n", 42));
	printf("%d\n",ft_printf("%---------------x\n", 0));
	printf("%d\n",ft_printf("%---------------x\n", -42));
	printf("%d\n",ft_printf("%###############x\n", 42));
	printf("%d\n",ft_printf("%###############x\n", 0));
	printf("%d\n",ft_printf("%###############x\n", -42));
	printf("%d\n",ft_printf("%00000000000000000000x\n", 42));
	printf("%d\n",ft_printf("%00000000000000000000x\n", 0));
	printf("%d\n",ft_printf("%00000000000000000000x\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",ft_printf("%########--------x\n", 42));
	printf("%d\n",ft_printf("%########--------x\n", 0));
	printf("%d\n",ft_printf("%########--------x\n", -42));
	printf("%d\n",ft_printf("%--------########x\n", 42));
	printf("%d\n",ft_printf("%--------########x\n", 0));
	printf("%d\n",ft_printf("%--------########x\n", -42));
	printf("%d\n",ft_printf("%########00000000x\n", 42));
	printf("%d\n",ft_printf("%########00000000x\n", 0));
	printf("%d\n",ft_printf("%########00000000x\n", -42));
	printf("%d\n",ft_printf("%00000000########x\n", 42));
	printf("%d\n",ft_printf("%00000000########x\n", 0));
	printf("%d\n",ft_printf("%00000000########x\n", -42));

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",ft_printf("%3x\n", 42));
	printf("%d\n",ft_printf("%3x\n", 0));
	printf("%d\n",ft_printf("%3x\n", -42));
	printf("%d\n",ft_printf("%.7x\n", 42));
	printf("%d\n",ft_printf("%.7x\n", 0));
	printf("%d\n",ft_printf("%.7x\n", -42));
	printf("%d\n",ft_printf("%3.7x\n", 42));
	printf("%d\n",ft_printf("%3.7x\n", 0));
	printf("%d\n",ft_printf("%3.7x\n", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",ft_printf("%hx\n", (short)42));
	printf("%d\n",ft_printf("%hx\n", (short)0));
	printf("%d\n",ft_printf("%hx\n", (short)-42));
	printf("%d\n",ft_printf("%hhx\n", (char)42));
	printf("%d\n",ft_printf("%hhx\n", (char)0));
	printf("%d\n",ft_printf("%hhx\n", (char)-42));
	printf("%d\n",ft_printf("%lx\n", (long)42));
	printf("%d\n",ft_printf("%lx\n", (long)0));
	printf("%d\n",ft_printf("%lx\n", (long)-42));
	printf("%d\n",ft_printf("%llx\n", (long long)42));
	printf("%d\n",ft_printf("%llx\n", (long long)0));
	printf("%d\n",ft_printf("%llx\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",ft_printf("%x%x%x\n", 42, 0, -42));
	printf("%d\n",ft_printf("%x    %x           %x\n", 42, 0, -42));
	printf("%d\n",ft_printf("%#x%-10x%0x\n", 42, 0, -42));
	printf("%d\n",ft_printf("%lx%hx%x\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", ft_printf("%-10.3llx\n people waiting\n", (long long)100));
//	printf("%d\n", ft_printf("time before world end : %2147483647.15hx days\n", (short)0));
	printf("%d\n", ft_printf("%.2x\n", 42));
	printf("%d\n", ft_printf("%010.3llx\n", (long long)42));
	printf("%d\n", ft_printf("0%0.2x0\n", 42));
	printf("%d\n", ft_printf("%-5.6llx%03.7hx%x%%x%7x%xx\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", ft_printf("%05.9lx%-6.10x%x%%x%7x%xx\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", ft_printf("%%x%xx%xx%%x\n", 1, 2));
	printf("%d\n", ft_printf("%%x%%x%%x%%x\n"));
	printf("%d\n", ft_printf("this is red : %x%%x%%x%%x%%x\n", 255));

// ------------- limit ---------------

	printf("------- limit --------\n");
	printf("%d\n", ft_printf("%x\n", CHAR_BIT));
	printf("%d\n", ft_printf("%hhx\n", (char)CHAR_BIT));
	printf("%d\n", ft_printf("%x\n", SCHAR_MIN));
	printf("%d\n", ft_printf("%hhx\n", (char)SCHAR_MIN));
	printf("%d\n", ft_printf("%x\n", SCHAR_MAX));
	printf("%d\n", ft_printf("%hhx\n", (char)SCHAR_MAX));
	printf("%d\n", ft_printf("%x\n", UCHAR_MAX));
	printf("%d\n", ft_printf("%hhx\n", (char)UCHAR_MAX));
	printf("%d\n", ft_printf("%x\n", CHAR_MIN));
	printf("%d\n", ft_printf("%hhx\n", (char)CHAR_MIN));
	printf("%d\n", ft_printf("%x\n", SHRT_MIN));
	printf("%d\n", ft_printf("%hx\n", (short)SHRT_MIN));
	printf("%d\n", ft_printf("%x\n", SHRT_MAX));
	printf("%d\n", ft_printf("%hx\n", (short)SHRT_MAX));
	printf("%d\n", ft_printf("%hx\n", (short)USHRT_MAX));
	printf("%d\n", ft_printf("%x\n", INT_MIN));
	printf("%d\n", ft_printf("%x\n", INT_MAX));
	printf("%d\n", ft_printf("%x\n", UINT_MAX));
	printf("%d\n", ft_printf("%x\n", (int)UINT_MAX));
	printf("%d\n", ft_printf("%lx\n", LONG_MIN));
	printf("%d\n", ft_printf("%lx\n", (long)LONG_MIN));
	printf("%d\n", ft_printf("%lx\n", LONG_MAX));
	printf("%d\n", ft_printf("%lx\n", (long)LONG_MAX));
	printf("%d\n", ft_printf("%lx\n", ULONG_MAX));
	printf("%d\n", ft_printf("%lx\n", (long)ULONG_MAX));
	printf("%d\n", ft_printf("%lx\n", (unsigned long)ULONG_MAX));
}

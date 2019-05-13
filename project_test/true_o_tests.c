/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_o_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:32:48 by darbib            #+#    #+#             */
/*   Updated: 2019/04/29 13:12:16 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"
#include <limits.h>
void true_o_tests()
{
	printf("-------- conversion o ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",printf("%o\n", 42));
	printf("%d\n",printf("%o\n", 0));
	printf("%d\n",printf("%o\n", -42));
	printf("%d\n",printf("%0o\n", 42));
	printf("%d\n",printf("%0o\n", 0));
	printf("%d\n",printf("%0o\n", -42));
	printf("%d\n",printf("%#o\n", 42));
	printf("%d\n",printf("%#o\n", 0));
	printf("%d\n",printf("%#o\n", -42));
	printf("%d\n",printf("%-o\n", 42));
	printf("%d\n",printf("%-o\n", 0));
	printf("%d\n",printf("%-o\n", -42));
	printf("%d\n",printf("%o\n", 42));
	printf("%d\n",printf("%o\n", 0));
	printf("%d\n",printf("%o\n", -42));
	printf("%d\n",printf("%0o\n", 42));
	printf("%d\n",printf("%0o\n", 0));
	printf("%d\n",printf("%0o\n", -42));
	printf("%d\n",printf("%#o\n", 42));
	printf("%d\n",printf("%#o\n", 0));
	printf("%d\n",printf("%#o\n", -42));
	printf("%d\n",printf("%-o\n", 42));
	printf("%d\n",printf("%-o\n", 0));
	printf("%d\n",printf("%-o\n", -42));

// -------- repetitive options ----------

	printf("------- n_options --------\n");
	printf("%d\n",printf("%---------------o\n", 42));
	printf("%d\n",printf("%---------------o\n", 0));
	printf("%d\n",printf("%---------------o\n", -42));
	printf("%d\n",printf("%###############o\n", 42));
	printf("%d\n",printf("%###############o\n", 0));
	printf("%d\n",printf("%###############o\n", -42));
	printf("%d\n",printf("%00000000000000000000o\n", 42));
	printf("%d\n",printf("%00000000000000000000o\n", 0));
	printf("%d\n",printf("%00000000000000000000o\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",printf("%########--------o\n", 42));
	printf("%d\n",printf("%########--------o\n", 0));
	printf("%d\n",printf("%########--------o\n", -42));
	printf("%d\n",printf("%--------########o\n", 42));
	printf("%d\n",printf("%--------########o\n", 0));
	printf("%d\n",printf("%--------########o\n", -42));
	printf("%d\n",printf("%########00000000o\n", 42));
	printf("%d\n",printf("%########00000000o\n", 0));
	printf("%d\n",printf("%########00000000o\n", -42));
	printf("%d\n",printf("%00000000########o\n", 42));
	printf("%d\n",printf("%00000000########o\n", 0));
	printf("%d\n",printf("%00000000########o\n", -42));

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",printf("%3o\n", 42));
	printf("%d\n",printf("%3o\n", 0));
	printf("%d\n",printf("%3o\n", -42));
	printf("%d\n",printf("%.7o\n", 42));
	printf("%d\n",printf("%.7o\n", 0));
	printf("%d\n",printf("%.7o\n", -42));
	printf("%d\n",printf("%3.7o\n", 42));
	printf("%d\n",printf("%3.7o\n", 0));
	printf("%d\n",printf("%3.7o\n", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",printf("%ho\n", (short)42));
	printf("%d\n",printf("%ho\n", (short)0));
	printf("%d\n",printf("%ho\n", (short)-42));
	printf("%d\n",printf("%hho\n", (char)42));
	printf("%d\n",printf("%hho\n", (char)0));
	printf("%d\n",printf("%hho\n", (char)-42));
	printf("%d\n",printf("%lo\n", (long)42));
	printf("%d\n",printf("%lo\n", (long)0));
	printf("%d\n",printf("%lo\n", (long)-42));
	printf("%d\n",printf("%llo\n", (long long)42));
	printf("%d\n",printf("%llo\n", (long long)0));
	printf("%d\n",printf("%llo\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",printf("%o%o%o\n", 42, 0, -42));
	printf("%d\n",printf("%o    %o           %o\n", 42, 0, -42));
	printf("%d\n",printf("%#o%o%0o\n", 42, 0, -42));
	printf("%d\n", printf("%lo%ho%o\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", printf("%-10.3llo\n people waiting\n", (long long)100));
//	printf("%d\n", printf("time before world end : %2147483647.15ho days\n", (short)0));
	printf("%d\n", printf("%.2o\n", 42));
	printf("%d\n", printf("%010.3llo\n", (long long)42));
	printf("%d\n", printf("0%0.2o0\n", 42));
	printf("%d\n", printf("%-5.6llo%#3.7ho%o%%o%7o%oo\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", printf("%05.9lo%-6.10o%o%%o%7o%oo\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", printf("%%o%oo%oo%%o\n", 1, 2));
	printf("%d\n", printf("%%o%%o%%o%%o\n"));

// ------------- limit ---------------

	printf("------- limit --------\n");
	printf("%d\n", printf("%o\n", CHAR_BIT));
	printf("%d\n", printf("%hho\n", (char)CHAR_BIT));
	printf("%d\n", printf("%o\n", SCHAR_MIN));
	printf("%d\n", printf("%hho\n", (char)SCHAR_MIN));
	printf("%d\n", printf("%o\n", SCHAR_MAX));
	printf("%d\n", printf("%hho\n", (char)SCHAR_MAX));
	printf("%d\n", printf("%o\n", UCHAR_MAX));
	printf("%d\n", printf("%hho\n", (char)UCHAR_MAX));
	printf("%d\n", printf("%o\n", CHAR_MIN));
	printf("%d\n", printf("%hho\n", (char)CHAR_MIN));
	printf("%d\n", printf("%o\n", SHRT_MIN));
	printf("%d\n", printf("%ho\n", (short)SHRT_MIN));
	printf("%d\n", printf("%o\n", SHRT_MAX));
	printf("%d\n", printf("%ho\n", (short)SHRT_MAX));
	printf("%d\n", printf("%ho\n", (short)USHRT_MAX));
	printf("%d\n", printf("%o\n", INT_MIN));
	printf("%d\n", printf("%o\n", INT_MAX));
	printf("%d\n", printf("%o\n", UINT_MAX));
	printf("%d\n", printf("%o\n", (int)UINT_MAX));
	printf("%d\n", printf("%lo\n", LONG_MIN));
	printf("%d\n", printf("%lo\n", (long)LONG_MIN));
	printf("%d\n", printf("%lo\n", LONG_MAX));
	printf("%d\n", printf("%lo\n", (long)LONG_MAX));
	printf("%d\n", printf("%lo\n", ULONG_MAX));
	printf("%d\n", printf("%lo\n", (long)ULONG_MAX));
	printf("%d\n", printf("%lo\n", (unsigned long)ULONG_MAX));
}

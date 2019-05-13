/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_i_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:06:18 by darbib            #+#    #+#             */
/*   Updated: 2019/04/23 17:52:32 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"


void true_i_tests()
{
	printf("-------- conversion i ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",printf("%i\n", 42));
	printf("%d\n",printf("%i\n", 0));
	printf("%d\n",printf("%i\n", -42));
	printf("%d\n",printf("%0i\n", 42));
	printf("%d\n",printf("%0i\n", 0));
	printf("%d\n",printf("%0i\n", -42));
	printf("%d\n",printf("%-i\n", 42));
	printf("%d\n",printf("%-i\n", 0));
	printf("%d\n",printf("%-i\n", -42));
	printf("%d\n",printf("% i\n", 42));
	printf("%d\n",printf("% i\n", 0));
	printf("%d\n",printf("% i\n", -42));
	printf("%d\n",printf("%+i\n", 42));
	printf("%d\n",printf("%+i\n", 0));
	printf("%d\n",printf("%+i\n", -42));

// -------- repetitive options ----------

	printf("------- n_options --------\n");
	printf("%d\n",printf("%++++++++++++++i\n", 42));
	printf("%d\n",printf("%++++++++++++++i\n", 0));
	printf("%d\n",printf("%++++++++++++++i\n", -42));
	printf("%d\n",printf("%---------------i\n", 42));
	printf("%d\n",printf("%---------------i\n", 0));
	printf("%d\n",printf("%---------------i\n", -42));
	printf("%d\n",printf("%00000000000000000000i\n", 42));
	printf("%d\n",printf("%00000000000000000000i\n", 0));
	printf("%d\n",printf("%00000000000000000000i\n", -42));
	printf("%d\n",printf("%                    i\n", 42));
	printf("%d\n",printf("%                     i\n", 0));
	printf("%d\n",printf("%                     i\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",printf("%++++++++--------i\n", 42));
	printf("%d\n",printf("%++++++++--------i\n", 0));
	printf("%d\n",printf("%++++++++--------i\n", -42));
	printf("%d\n",printf("%--------++++++++i\n", 42));
	printf("%d\n",printf("%--------++++++++i\n", 0));
	printf("%d\n",printf("%--------++++++++i\n", -42));
	printf("%d\n",printf("%++++++++00000000i\n", 42));
	printf("%d\n",printf("%++++++++00000000i\n", 0));
	printf("%d\n",printf("%++++++++00000000i\n", -42));
	printf("%d\n",printf("%00000000++++++++i\n", 42));
	printf("%d\n",printf("%00000000++++++++i\n", 0));
	printf("%d\n",printf("%00000000++++++++i\n", -42));
	printf("%d\n",printf("%--------        i\n", 42));
	printf("%d\n",printf("%--------        i\n", 0));
	printf("%d\n",printf("%--------        i\n", -42));
	printf("%d\n",printf("%        --------i\n", 42));
	printf("%d\n",printf("%        --------i\n", 0));
	printf("%d\n",printf("%        --------i\n", -42));
	printf("%d\n",printf("%        00000000i\n", 42));
	printf("%d\n",printf("%        00000000i\n", 0));
	printf("%d\n",printf("%        00000000i\n", -42));
	printf("%d\n",printf("%00000000        i\n", 42));
	printf("%d\n",printf("%00000000        i\n", 0));
	printf("%d\n",printf("%00000000        i\n", -42));

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",printf("%3i", 42));
	printf("%d\n",printf("%3i", 0));
	printf("%d\n",printf("%3i", -42));
	printf("%d\n",printf("%.7i", 42));
	printf("%d\n",printf("%.7i", 0));
	printf("%d\n",printf("%.7i", -42));
	printf("%d\n",printf("%3.7i", 42));
	printf("%d\n",printf("%3.7i", 0));
	printf("%d\n",printf("%3.7i", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",printf("%hi\n", (short)42));
	printf("%d\n",printf("%hi\n", (short)0));
	printf("%d\n",printf("%hi\n", (short)-42));
	printf("%d\n",printf("%hhi\n", (char)42));
	printf("%d\n",printf("%hhi\n", (char)0));
	printf("%d\n",printf("%hhi\n", (char)-42));
	printf("%d\n",printf("%li\n", (long)42));
	printf("%d\n",printf("%li\n", (long)0));
	printf("%d\n",printf("%li\n", (long)-42));
	printf("%d\n",printf("%lli\n", (long long)42));
	printf("%d\n",printf("%lli\n", (long long)0));
	printf("%d\n",printf("%lli\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",printf("%i%i%i\n", 42, 0, -42));
	printf("%d\n",printf("%i    %i           %i\n", 42, 0, -42));
	printf("%d\n",printf("%-i% i%0i\n", 42, 0, -42));
	printf("%d\n", printf("%li%hi%i\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", printf("%-10.3lli\n people waiting\n", (long long)100));
//	printf("%d\n", printf("time before world end : %2147483647.15hi days\n", (short)0));
	printf("%d\n", printf("%.2i\n", 42));
	printf("%d\n", printf("%+10.3lli\n", (long long)42));
	printf("%d\n", printf("0%0.2i0\n", 42));
/*	printf("%d\n", printf("%-5.6lli%+3.7hi%i%%i%7i%ii\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", printf("%05.9li%-6.10i%i%%i%7i%ii\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", printf("%%i%ii%ii%%i\n", 1, 2));
	printf("%d\n", printf("%%i%%i%%i%%i\n"));
*/}

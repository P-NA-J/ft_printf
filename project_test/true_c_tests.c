/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/13 13:44:55 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "testprintf.h"
#include <stdio.h>


int main()
{
	printf("-------- conversion i ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",printf("%i\n", 42));
	printf("%d\n",printf("%i\n", 0));
	printf("%d\n",printf("%i\n", -42));
	printf("%d\n",printf("%0i\n", 42));
	printf("%d\n",printf("%0i\n", 0));
	printf("%d\n",printf("%0i\n", -42));
	printf("%d\n",printf("%#i\n", 42));
	printf("%d\n",printf("%#i\n", 0));
	printf("%d\n",printf("%#i\n", -42));
	printf("%d\n",printf("%-i\n", 42));
	printf("%d\n",printf("%-i\n", 0));
	printf("%d\n",printf("%-i\n", -42));
	printf("%d\n",printf("% i\n", 42));
	printf("%d\n",printf("% i\n", 0));
	printf("%d\n",printf("% i\n", -42));
	printf("%d\n",printf("%+i\n", 42));
	printf("%d\n",printf("%+i\n", 0));
	printf("%d\n",printf("%+i\n", -42));
	printf("%d\n",printf("% i\n", 42));
	printf("%d\n",printf("% i\n", 0));
	printf("%d\n",printf("% i\n", -42));
	printf("%d\n",printf("%%i\n", 42));
	printf("%d\n",printf("%%i\n", 0));
	printf("%d\n",printf("%%i\n", -42));
	printf("%d\n",printf("%%0i\n", 42));
	printf("%d\n",printf("%%0i\n", 0));
	printf("%d\n",printf("%%0i\n", -42));
	printf("%d\n",printf("%%#i\n", 42));
	printf("%d\n",printf("%%#i\n", 0));
	printf("%d\n",printf("%%#i\n", -42));
	printf("%d\n",printf("%%-i\n", 42));
	printf("%d\n",printf("%%-i\n", 0));
	printf("%d\n",printf("%%-i\n", -42));
	printf("%d\n",printf("%% i\n", 42));
	printf("%d\n",printf("%% i\n", 0));
	printf("%d\n",printf("%% i\n", -42));
	printf("%d\n",printf("%%+i\n", 42));
	printf("%d\n",printf("%%+i\n", 0));
	printf("%d\n",printf("%%+i\n", -42));
	printf("%d\n",printf("%% i\n", 42));
	printf("%d\n",printf("%% i\n", 0));
	printf("%d\n",printf("%% i\n", -42));
	printf("%d\n",printf("%i\n", 42));
	printf("%d\n",printf("%i\n", 0));
	printf("%d\n",printf("%i\n", -42));
	printf("%d\n",printf("%0j\n", 42));
	printf("%d\n",printf("%0i\n", 0));
	printf("%d\n",printf("%0i\n", -42));
	printf("%d\n",printf("%#i\n", 42));
	printf("%d\n",printf("%#i\n", 0));
	printf("%d\n",printf("%#i\n", -42));
	printf("%d\n",printf("%-i\n", 42));
	printf("%d\n",printf("%-i\n", 0));
	printf("%d\n",printf("%-i\n", -42));
	printf("%d\n",printf("% i\n", 42));
	printf("%d\n",printf("% i\n", 0));
	printf("%d\n",printf("% i\n", -42));
	printf("%d\n",printf("%+i\n", 42));
	printf("%d\n",printf("%+i\n", 0));
	printf("%d\n",printf("%+i\n", -42));
	printf("%d\n",printf("% i\n", 42));
	printf("%d\n",printf("% i\n", 0));
	printf("%d\n",printf("% i\n", -42));

// -------- repetitive options ---------- 

	printf("------- n_options --------\n");
	printf("%d\n",printf("%++++++++++++++i\n", 42));
	printf("%d\n",printf("%++++++++++++++i\n", 0));
	printf("%d\n",printf("%++++++++++++++i\n", -42));
	printf("%d\n",printf("%---------------i\n", 42));
	printf("%d\n",printf("%---------------i\n", 0));
	printf("%d\n",printf("%---------------i\n", -42));
	printf("%d\n",printf("%###############i\n", 42));
	printf("%d\n",printf("%###############i\n", 0));
	printf("%d\n",printf("%###############i\n", -42));
	printf("%d\n",printf("%00000000000000000000i\n", 42));
	printf("%d\n",printf("%00000000000000000000i\n", 0));
	printf("%d\n",printf("%00000000000000000000i\n", -42));
	printf("%d\n",printf("%                    i\n", 42));
	printf("%d\n",printf("%                     i\n", 0));
	printf("%d\n",printf("%                     i\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",printf("%########++++++++i\n", 42));
	printf("%d\n",printf("%########++++++++i\n", 0));
	printf("%d\n",printf("%########++++++++i\n", -42));
	printf("%d\n",printf("%++++++++########i\n", 42));
	printf("%d\n",printf("%++++++++########i\n", 0));
	printf("%d\n",printf("%++++++++########i\n", -42));
	printf("%d\n",printf("%########--------i\n", 42));
	printf("%d\n",printf("%########--------i\n", 0));
	printf("%d\n",printf("%########--------i\n", -42));
	printf("%d\n",printf("%--------########i\n", 42));
	printf("%d\n",printf("%--------########i\n", 0));
	printf("%d\n",printf("%--------########i\n", -42));
	printf("%d\n",printf("%########00000000i\n", 42));
	printf("%d\n",printf("%########00000000i\n", 0));
	printf("%d\n",printf("%########00000000i\n", -42));
	printf("%d\n",printf("%00000000########i\n", 42));
	printf("%d\n",printf("%00000000########i\n", 0));
	printf("%d\n",printf("%00000000########i\n", -42));
	printf("%d\n",printf("%########        i\n", 42));
	printf("%d\n",printf("%########        i\n", 0));
	printf("%d\n",printf("%########        i\n", -42));
	printf("%d\n",printf("%        ########i\n", 42));
	printf("%d\n",printf("%        ########i\n", 0));
	printf("%d\n",printf("%        ########i\n", -42));
	printf("%d\n",printf("%++++++++--------i\n", 42));
	printf("%d\n",printf("%++++++++--------i\n", 0));
	printf("%d\n",printf("%++++++++--------i\n", -42));
	printf("%d\n",printf("%--------++++++++i\n", 42));
	printf("%d\n",printf("%--------++++++++i\n", 0));
	printf("%d\n",printf("%--------++++++++i\n", -42));
	printf("%d\n",printf("%++++++++########i\n", 42));
	printf("%d\n",printf("%++++++++########i\n", 0));
	printf("%d\n",printf("%++++++++########i\n", -42));
	printf("%d\n",printf("%########++++++++i\n", 42));
	printf("%d\n",printf("%########++++++++i\n", 0));
	printf("%d\n",printf("%########++++++++i\n", -42));
	printf("%d\n",printf("%++++++++00000000i\n", 42));
	printf("%d\n",printf("%++++++++00000000i\n", 0));
	printf("%d\n",printf("%++++++++00000000i\n", -42));
	printf("%d\n",printf("%00000000++++++++i\n", 42));
	printf("%d\n",printf("%00000000++++++++i\n", 0));
	printf("%d\n",printf("%00000000++++++++i\n", -42));
	printf("%d\n",printf("%++++++++        i\n", 42));
	printf("%d\n",printf("%++++++++        i\n", 0));
	printf("%d\n",printf("%++++++++        i\n", -42));
	printf("%d\n",printf("%        ++++++++i\n", 42));
	printf("%d\n",printf("%        ++++++++i\n", 0));
	printf("%d\n",printf("%        ++++++++i\n", -42));
	printf("%d\n",printf("%--------00000000i\n", 42));
	printf("%d\n",printf("%--------00000000i\n", 0));
	printf("%d\n",printf("%--------00000000i\n", -42));
	printf("%d\n",printf("%00000000--------i\n", 42));
	printf("%d\n",printf("%00000000--------i\n", 0));
	printf("%d\n",printf("%00000000--------i\n", -42));
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
	printf("%d\n",printf("%-+#0 i\n", 42));
	printf("%d\n",printf("%-+#0 i\n", 0));
	printf("%d\n",printf("%-+#0 i\n", -42));
	printf("%d\n",printf("%-+# 0i\n", 42));
	printf("%d\n",printf("%-+# 0i\n", 0));
	printf("%d\n",printf("%-+# 0i\n", -42));
	printf("%d\n",printf("%-+0 #i\n", 42));
	printf("%d\n",printf("%-+0 #i\n", 0));
	printf("%d\n",printf("%-+0 #i\n", -42));
	printf("%d\n",printf("%-+0# i\n", 42));
	printf("%d\n",printf("%-+0# i\n", 0));
	printf("%d\n",printf("%-+0# i\n", -42));
	printf("%d\n",printf("%+-#0 i\n", 42));
	printf("%d\n",printf("%+-#0 i\n", 0));
	printf("%d\n",printf("%+-#0 i\n", -42));
	printf("%d\n",printf("%+- #0i\n", 42));
	printf("%d\n",printf("%+- #0i\n", 0));
	printf("%d\n",printf("%+- #0i\n", -42));
	printf("%d\n",printf("%+- 0#i\n", 42));
	printf("%d\n",printf("%+- 0#i\n", 0));
	printf("%d\n",printf("%+- 0#i\n", -42));
	printf("%d\n",printf("%+ -#0i\n", 42));
	printf("%d\n",printf("%+ -#0i\n", 0));
	printf("%d\n",printf("%+ -#0i\n", -42));
	printf("%d\n",printf("%+ -0#i\n", 42));
	printf("%d\n",printf("%+ -0#i\n", 0));
	printf("%d\n",printf("%+ -0#i\n", -42));
	printf("%d\n",printf("% +-#0i\n", 42));
	printf("%d\n",printf("% +-#0i\n", 0));
	printf("%d\n",printf("% +-#0i\n", -42));
	printf("%d\n",printf("% +-0#i\n", 42));
	printf("%d\n",printf("% +-0#i\n", 0));
	printf("%d\n",printf("% +-0#i\n", -42));
	printf("%d\n",printf("% -+#0i\n", 42));
	printf("%d\n",printf("% -+#0i\n", 0));
	printf("%d\n",printf("% -+#0i\n", -42));
	printf("%d\n",printf("% -+0#i\n", 42));
	printf("%d\n",printf("% -+0#i\n", 0));
	printf("%d\n",printf("% -+0#i\n", -42));
	printf("%d\n",printf("%- +#0i\n", 42));
	printf("%d\n",printf("%- +#0i\n", 0));
	printf("%d\n",printf("%- +#0i\n", -42));
	printf("%d\n",printf("%- +0#i\n", 42));
	printf("%d\n",printf("%- +0#i\n", 0));
	printf("%d\n",printf("%- +0#i\n", -42));
	printf("%d\n",printf("%- #+0i\n", 42));
	printf("%d\n",printf("%- #+0i\n", 0));
	printf("%d\n",printf("%- #+0i\n", -42));
	printf("%d\n",printf("%- 0+#i\n", 42));
	printf("%d\n",printf("%- 0+#i\n", 0));
	printf("%d\n",printf("%- 0+#i\n", -42));
	printf("%d\n",printf("%- #0+i\n", 42));
	printf("%d\n",printf("%- #0+i\n", 0));
	printf("%d\n",printf("%- #0+i\n", -42));
	printf("%d\n",printf("%- 0#+i\n", 42));
	printf("%d\n",printf("%- 0#+i\n", 0));
	printf("%d\n",printf("%- 0#+i\n", -42));
	printf("%d\n",printf("% -+#0i\n", 42));
	printf("%d\n",printf("% -+#0i\n", 0));
	printf("%d\n",printf("% -+#0i\n", -42));
	printf("%d\n",printf("% -+0#i\n", 42));
	printf("%d\n",printf("% -+0#i\n", 0));
	printf("%d\n",printf("% -+0#i\n", -42));
	printf("%d\n",printf("% -#+0i\n", 42));
	printf("%d\n",printf("% -#+0i\n", 0));
	printf("%d\n",printf("% -#+0i\n", -42));
	printf("%d\n",printf("% -0+#i\n", 42));
	printf("%d\n",printf("% -0+#i\n", 0));
	printf("%d\n",printf("% -0+#i\n", -42));
	printf("%d\n",printf("% -#0+i\n", 42));
	printf("%d\n",printf("% -#0+i\n", 0));
	printf("%d\n",printf("% -#0+i\n", -42));
	printf("%d\n",printf("% -0#+i\n", 42));
	printf("%d\n",printf("% -0#+i\n", 0));
	printf("%d\n",printf("% -0#+i\n", -42));
	printf("%d\n",printf("% +#-0i\n", 42));
	printf("%d\n",printf("% +#-0i\n", 0));
	printf("%d\n",printf("% +#-0i\n", -42));
	printf("%d\n",printf("% +0-#i\n", 42));
	printf("%d\n",printf("% +0-#i\n", 0));
	printf("%d\n",printf("% +0-#i\n", -42));
	printf("%d\n",printf("% -#+0i\n", 42));
	printf("%d\n",printf("% -#+0i\n", 0));
	printf("%d\n",printf("% -#+0i\n", -42));
	printf("%d\n",printf("% -0+#i\n", 42));
	printf("%d\n",printf("% -0+#i\n", 0));
	printf("%d\n",printf("% -0+#i\n", -42));
	printf("%d\n",printf("% -#0+i\n", 42));
	printf("%d\n",printf("% -#0+i\n", 0));
	printf("%d\n",printf("% -#0+i\n", -42));
	printf("%d\n",printf("% -0#+i\n", 42));
	printf("%d\n",printf("% -0#+i\n", 0));
	printf("%d\n",printf("% -0#+i\n", -42));

// ---------- LMC & precision ---------

	printf("------- mixed --------\n");
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

	printf("------- MFW --------\n");
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

	printf("------- sizes --------\n");
	printf("%d\n",printf("%i%i%i\n", 42, 0, -42));
	printf("%d\n",printf("%i    %i           %i\n", 42, 0, -42));
	printf("%d\n",printf("%#i% i%0i\n", 42, 0, -42));
	printf("%d\n", printf("%li%hi%i\n", (long)42, (short)0, -42));

// ----------- invalid printf ---------

	printf("------- n_conversions --------\n");
	printf("%d\n", printf("aha!\n", 42));
	printf("%d\n", printf("%i\n"));
	printf("%d\n", printf("%#i\n", 42));
	printf("%d\n", printf("%h\n"));
	printf("%d\n", printf("%yi\n", 42));
	printf("%d\n", printf("%ll3.5\n", 42));
	printf("%d\n", printf("%li%hi%i\n", (short)42, (long)0, -42));
	printf("%d\n", printf("%li%hi%i\n", (short)42, 0, (long)-42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", printf("%-10.3lld\n people waiting", (long long)100));
	printf("%d\n", printf("time before world end : %2147483647.15hd days\n", (short)0));
	printf("%d\n", printf("%.2d\n", 42));
	printf("%d\n", printf("%+10.3lld\n", (long long)42));
	printf("%d\n", printf("0%0.2d0\n", 42));
	printf("%d\n", printf("%-5.6lld%+3.7hd%d%%d%7d%dd\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", printf("%05.9ld%-6.10d%d%%d%7d%dd\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", printf("%%d%dd%dd%%d\n", 1, 2));
	printf("%d\n", printf("%%d%%d%%d%%d\n"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/05/03 02:23:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftft_printf.h"
#include "testft_printf.h"
#include <stdio.h>


void	f_tests(void)
{
	void	true_f_tests(void)
{
	//	-------- Test basique unitaire --------

	printf("-------- Test basique unitaire --------\n");

	printf("%d\n",ft_printf("%f\n", 1.));
	printf("%d\n",ft_printf("%f\n", 0.));
	printf("%d\n",ft_printf("%f\n", -1.));

	printf("%d\n",ft_printf("%0f\n", 1.));
	printf("%d\n",ft_printf("%0f\n", 0.));
	printf("%d\n",ft_printf("%0f\n", -1.));

	printf("%d\n",ft_printf("%-f\n", 1.));
	printf("%d\n",ft_printf("%-f\n", 0.));
	printf("%d\n",ft_printf("%-f\n", -1.));

	printf("%d\n",ft_printf("%+f\n", 1.));
	printf("%d\n",ft_printf("%+f\n", 0.));
	printf("%d\n",ft_printf("%+f\n", -1.));

	printf("%d\n",ft_printf("% f\n", 1.));
	printf("%d\n",ft_printf("% f\n", 0.));
	printf("%d\n",ft_printf("% f\n", -1.));

	printf("%d\n",ft_printf("%#f\n", 1.));
	printf("%d\n",ft_printf("%#f\n", 0.));
	printf("%d\n",ft_printf("%#f\n", -1.));

	printf("%d\n",ft_printf("%10f\n", 1.));
	printf("%d\n",ft_printf("%10f\n", 0.));
	printf("%d\n",ft_printf("%10f\n", -1.));

	printf("%d\n",ft_printf("%.10f\n", 1.));
	printf("%d\n",ft_printf("%.10f\n", 0.));
	printf("%d\n",ft_printf("%.10f\n", -1.));

	printf("---------------------------------------\n---------------------------------------\n");

// -------- Test avancés --------

	printf("-------- Test avancés --------\n");

	printf("%d\n",ft_printf("%10.10f\n", 1.));
	printf("%d\n",ft_printf("%10.10f\n", 0.));
	printf("%d\n",ft_printf("%10.10f\n", -1.));

	printf("%d\n",ft_printf("%#-f\n", 1.));
	printf("%d\n",ft_printf("%#-f\n", 0.));
	printf("%d\n",ft_printf("%#-f\n", -1.));

	printf("%d\n",ft_printf("%-#f\n", 1.));
	printf("%d\n",ft_printf("%-#f\n", 0.));
	printf("%d\n",ft_printf("%-#f\n", -1.));

	printf("%d\n",ft_printf("%+#f\n", 1.));
	printf("%d\n",ft_printf("%+#f\n", 0.));
	printf("%d\n",ft_printf("%+#f\n", -1.));

	printf("%d\n",ft_printf("%#+f\n", 1.));
	printf("%d\n",ft_printf("%#+f\n", 0.));
	printf("%d\n",ft_printf("%#+f\n", -1.));

	printf("%d\n",ft_printf("%-+f\n", 1.));
	printf("%d\n",ft_printf("%-+f\n", 0.));
	printf("%d\n",ft_printf("%-+f\n", -1.));

	printf("%d\n",ft_printf("%+-f\n", 1.));
	printf("%d\n",ft_printf("%+-f\n", 0.));
	printf("%d\n",ft_printf("%+-f\n", -1.));

	printf("%d\n",ft_printf("%+0f\n", 1.));
	printf("%d\n",ft_printf("%+0f\n", 0.));
	printf("%d\n",ft_printf("%+0f\n", -1.));

	printf("%d\n",ft_printf("%0 f\n", 1.));
	printf("%d\n",ft_printf("%0 f\n", 0.));
	printf("%d\n",ft_printf("%0 f\n", -1.));

	printf("%d\n",ft_printf("% 0f\n", 1.));
	printf("%d\n",ft_printf("% 0f\n", 0.));
	printf("%d\n",ft_printf("% 0f\n", -1.));

	printf("%d\n",ft_printf("% -f\n", 1.));
	printf("%d\n",ft_printf("% -f\n", 0.));
	printf("%d\n",ft_printf("% -f\n", -1.));

	printf("%d\n",ft_printf("%- f\n", 1.));
	printf("%d\n",ft_printf("%- f\n", 0.));
	printf("%d\n",ft_printf("%- f\n", -1.));

	printf("%d\n",ft_printf("%#0f\n", 1.));
	printf("%d\n",ft_printf("%#0f\n", 0.));
	printf("%d\n",ft_printf("%#0f\n", -1.));

	printf("%d\n",ft_printf("%0#f\n", 1.));
	printf("%d\n",ft_printf("%0#f\n", 0.));
	printf("%d\n",ft_printf("%0#f\n", -1.));

	printf("%d\n",ft_printf("% #f\n", 1.));
	printf("%d\n",ft_printf("% #f\n", 0.));
	printf("%d\n",ft_printf("% #f\n", -1.));

	printf("%d\n",ft_printf("%# f\n", 1.));
	printf("%d\n",ft_printf("%# f\n", 0.));
	printf("%d\n",ft_printf("%# f\n", -1.));


	printf("%d\n",ft_printf("%#-10.10f\n", 1.));
	printf("%d\n",ft_printf("%#-10.10f\n", 0.));
	printf("%d\n",ft_printf("%#-10.10f\n", -1.));

	printf("%d\n",ft_printf("%-#10.10f\n", 1.));
	printf("%d\n",ft_printf("%-#10.10f\n", 0.));
	printf("%d\n",ft_printf("%-#10.10f\n", -1.));

	printf("%d\n",ft_printf("%+#10.10f\n", 1.));
	printf("%d\n",ft_printf("%+#10.10f\n", 0.));
	printf("%d\n",ft_printf("%+#10.10f\n", -1.));

	printf("%d\n",ft_printf("%#+10.10f\n", 1.));
	printf("%d\n",ft_printf("%#+10.10f\n", 0.));
	printf("%d\n",ft_printf("%#+10.10f\n", -1.));

	printf("%d\n",ft_printf("%-+10.10f\n", 1.));
	printf("%d\n",ft_printf("%-+10.10f\n", 0.));
	printf("%d\n",ft_printf("%-+10.10f\n", -1.));

	printf("%d\n",ft_printf("%+-10.10f\n", 1.));
	printf("%d\n",ft_printf("%+-10.10f\n", 0.));
	printf("%d\n",ft_printf("%+-10.10f\n", -1.));

	printf("%d\n",ft_printf("%+010.10f\n", 1.));
	printf("%d\n",ft_printf("%+010.10f\n", 0.));
	printf("%d\n",ft_printf("%+010.10f\n", -1.));

	printf("%d\n",ft_printf("%0 10.10f\n", 1.));
	printf("%d\n",ft_printf("%0 10.10f\n", 0.));
	printf("%d\n",ft_printf("%0 10.10f\n", -1.));

	printf("%d\n",ft_printf("% 010.10f\n", 1.));
	printf("%d\n",ft_printf("% 010.10f\n", 0.));
	printf("%d\n",ft_printf("% 010.10f\n", -1.));

	printf("%d\n",ft_printf("% -10.10f\n", 1.));
	printf("%d\n",ft_printf("% -10.10f\n", 0.));
	printf("%d\n",ft_printf("% -10.10f\n", -1.));

	printf("%d\n",ft_printf("%- 10.10f\n", 1.));
	printf("%d\n",ft_printf("%- 10.10f\n", 0.));
	printf("%d\n",ft_printf("%- 10.10f\n", -1.));

	printf("%d\n",ft_printf("%#010.10f\n", 1.));
	printf("%d\n",ft_printf("%#010.10f\n", 0.));
	printf("%d\n",ft_printf("%#010.10f\n", -1.));

	printf("%d\n",ft_printf("%0#10.10f\n", 1.));
	printf("%d\n",ft_printf("%0#10.10f\n", 0.));
	printf("%d\n",ft_printf("%0#10.10f\n", -1.));

	printf("%d\n",ft_printf("% #10.10f\n", 1.));
	printf("%d\n",ft_printf("% #10.10f\n", 0.));
	printf("%d\n",ft_printf("% #10.10f\n", -1.));

	printf("%d\n",ft_printf("%# 10.10f\n", 1.));
	printf("%d\n",ft_printf("%# 10.10f\n", 0.));
	printf("%d\n",ft_printf("%# 10.10f\n", -1.));



	printf("%d\n",ft_printf("%#-10.0f\n", 1.));
	printf("%d\n",ft_printf("%#-10.0f\n", 0.));
	printf("%d\n",ft_printf("%#-10.0f\n", -1.));

	printf("%d\n",ft_printf("%-#10.0f\n", 1.));
	printf("%d\n",ft_printf("%-#10.0f\n", 0.));
	printf("%d\n",ft_printf("%-#10.0f\n", -1.));

	printf("%d\n",ft_printf("%+#10.0f\n", 1.));
	printf("%d\n",ft_printf("%+#10.0f\n", 0.));
	printf("%d\n",ft_printf("%+#10.0f\n", -1.));

	printf("%d\n",ft_printf("%#+10.0f\n", 1.));
	printf("%d\n",ft_printf("%#+10.0f\n", 0.));
	printf("%d\n",ft_printf("%#+10.0f\n", -1.));

	printf("%d\n",ft_printf("%-+10.0f\n", 1.));
	printf("%d\n",ft_printf("%-+10.0f\n", 0.));
	printf("%d\n",ft_printf("%-+10.0f\n", -1.));

	printf("%d\n",ft_printf("%+-10.0f\n", 1.));
	printf("%d\n",ft_printf("%+-10.0f\n", 0.));
	printf("%d\n",ft_printf("%+-10.0f\n", -1.));

	printf("%d\n",ft_printf("%+010.0f\n", 1.));
	printf("%d\n",ft_printf("%+010.0f\n", 0.));
	printf("%d\n",ft_printf("%+010.0f\n", -1.));

	printf("%d\n",ft_printf("%0 10.0f\n", 1.));
	printf("%d\n",ft_printf("%0 10.0f\n", 0.));
	printf("%d\n",ft_printf("%0 10.0f\n", -1.));

	printf("%d\n",ft_printf("% 010.0f\n", 1.));
	printf("%d\n",ft_printf("% 010.0f\n", 0.));
	printf("%d\n",ft_printf("% 010.0f\n", -1.));

	printf("%d\n",ft_printf("% -10.0f\n", 1.));
	printf("%d\n",ft_printf("% -10.0f\n", 0.));
	printf("%d\n",ft_printf("% -10.0f\n", -1.));

	printf("%d\n",ft_printf("%- 10.0f\n", 1.));
	printf("%d\n",ft_printf("%- 10.0f\n", 0.));
	printf("%d\n",ft_printf("%- 10.0f\n", -1.));

	printf("%d\n",ft_printf("%#010.0f\n", 1.));
	printf("%d\n",ft_printf("%#010.0f\n", 0.));
	printf("%d\n",ft_printf("%#010.0f\n", -1.));

	printf("%d\n",ft_printf("%0#10.0f\n", 1.));
	printf("%d\n",ft_printf("%0#10.0f\n", 0.));
	printf("%d\n",ft_printf("%0#10.0f\n", -1.));

	printf("%d\n",ft_printf("% #10.0f\n", 1.));
	printf("%d\n",ft_printf("% #10.0f\n", 0.));
	printf("%d\n",ft_printf("% #10.0f\n", -1.));

	printf("%d\n",ft_printf("%# 10.0f\n", 1.));
	printf("%d\n",ft_printf("%# 10.0f\n", 0.));
	printf("%d\n",ft_printf("%# 10.0f\n", -1.));




	printf("%d\n",ft_printf("%#-10.f\n", 1.));
	printf("%d\n",ft_printf("%#-10.f\n", 0.));
	printf("%d\n",ft_printf("%#-10.f\n", -1.));

	printf("%d\n",ft_printf("%-#10.f\n", 1.));
	printf("%d\n",ft_printf("%-#10.f\n", 0.));
	printf("%d\n",ft_printf("%-#10.f\n", -1.));

	printf("%d\n",ft_printf("%+#10.f\n", 1.));
	printf("%d\n",ft_printf("%+#10.f\n", 0.));
	printf("%d\n",ft_printf("%+#10.f\n", -1.));

	printf("%d\n",ft_printf("%#+10.f\n", 1.));
	printf("%d\n",ft_printf("%#+10.f\n", 0.));
	printf("%d\n",ft_printf("%#+10.f\n", -1.));

	printf("%d\n",ft_printf("%-+10.f\n", 1.));
	printf("%d\n",ft_printf("%-+10.f\n", 0.));
	printf("%d\n",ft_printf("%-+10.f\n", -1.));

	printf("%d\n",ft_printf("%+-10.f\n", 1.));
	printf("%d\n",ft_printf("%+-10.f\n", 0.));
	printf("%d\n",ft_printf("%+-10.f\n", -1.));

	printf("%d\n",ft_printf("%+010.f\n", 1.));
	printf("%d\n",ft_printf("%+010.f\n", 0.));
	printf("%d\n",ft_printf("%+010.f\n", -1.));

	printf("%d\n",ft_printf("%0 10.f\n", 1.));
	printf("%d\n",ft_printf("%0 10.f\n", 0.));
	printf("%d\n",ft_printf("%0 10.f\n", -1.));

	printf("%d\n",ft_printf("% 010.f\n", 1.));
	printf("%d\n",ft_printf("% 010.f\n", 0.));
	printf("%d\n",ft_printf("% 010.f\n", -1.));

	printf("%d\n",ft_printf("% -10.f\n", 1.));
	printf("%d\n",ft_printf("% -10.f\n", 0.));
	printf("%d\n",ft_printf("% -10.f\n", -1.));

	printf("%d\n",ft_printf("%- 10.f\n", 1.));
	printf("%d\n",ft_printf("%- 10.f\n", 0.));
	printf("%d\n",ft_printf("%- 10.f\n", -1.));

	printf("%d\n",ft_printf("%#010.f\n", 1.));
	printf("%d\n",ft_printf("%#010.f\n", 0.));
	printf("%d\n",ft_printf("%#010.f\n", -1.));

	printf("%d\n",ft_printf("%0#10.f\n", 1.));
	printf("%d\n",ft_printf("%0#10.f\n", 0.));
	printf("%d\n",ft_printf("%0#10.f\n", -1.));

	printf("%d\n",ft_printf("% #10.f\n", 1.));
	printf("%d\n",ft_printf("% #10.f\n", 0.));
	printf("%d\n",ft_printf("% #10.f\n", -1.));

	printf("%d\n",ft_printf("%# 10.f\n", 1.));
	printf("%d\n",ft_printf("%# 10.f\n", 0.));
	printf("%d\n",ft_printf("%# 10.f\n", -1.));

	printf("%d\n",ft_printf("%#-.10f\n", 1.));
	printf("%d\n",ft_printf("%#-.10f\n", 0.));
	printf("%d\n",ft_printf("%#-.10f\n", -1.));

	printf("%d\n",ft_printf("%-#.10f\n", 1.));
	printf("%d\n",ft_printf("%-#.10f\n", 0.));
	printf("%d\n",ft_printf("%-#.10f\n", -1.));

	printf("%d\n",ft_printf("%+#.10f\n", 1.));
	printf("%d\n",ft_printf("%+#.10f\n", 0.));
	printf("%d\n",ft_printf("%+#.10f\n", -1.));

	printf("%d\n",ft_printf("%#+.10f\n", 1.));
	printf("%d\n",ft_printf("%#+.10f\n", 0.));
	printf("%d\n",ft_printf("%#+.10f\n", -1.));

	printf("%d\n",ft_printf("%-+.10f\n", 1.));
	printf("%d\n",ft_printf("%-+.10f\n", 0.));
	printf("%d\n",ft_printf("%-+.10f\n", -1.));

	printf("%d\n",ft_printf("%+-.10f\n", 1.));
	printf("%d\n",ft_printf("%+-.10f\n", 0.));
	printf("%d\n",ft_printf("%+-.10f\n", -1.));

	printf("%d\n",ft_printf("%+0.10f\n", 1.));
	printf("%d\n",ft_printf("%+0.10f\n", 0.));
	printf("%d\n",ft_printf("%+0.10f\n", -1.));

	printf("%d\n",ft_printf("%0 .10f\n", 1.));
	printf("%d\n",ft_printf("%0 .10f\n", 0.));
	printf("%d\n",ft_printf("%0 .10f\n", -1.));

	printf("%d\n",ft_printf("% 0.10f\n", 1.));
	printf("%d\n",ft_printf("% 0.10f\n", 0.));
	printf("%d\n",ft_printf("% 0.10f\n", -1.));

	printf("%d\n",ft_printf("% -.10f\n", 1.));
	printf("%d\n",ft_printf("% -.10f\n", 0.));
	printf("%d\n",ft_printf("% -.10f\n", -1.));

	printf("%d\n",ft_printf("%- .10f\n", 1.));
	printf("%d\n",ft_printf("%- .10f\n", 0.));
	printf("%d\n",ft_printf("%- .10f\n", -1.));

	printf("%d\n",ft_printf("%#0.10f\n", 1.));
	printf("%d\n",ft_printf("%#0.10f\n", 0.));
	printf("%d\n",ft_printf("%#0.10f\n", -1.));

	printf("%d\n",ft_printf("%0#.10f\n", 1.));
	printf("%d\n",ft_printf("%0#.10f\n", 0.));
	printf("%d\n",ft_printf("%0#.10f\n", -1.));

	printf("%d\n",ft_printf("% #.10f\n", 1.));
	printf("%d\n",ft_printf("% #.10f\n", 0.));
	printf("%d\n",ft_printf("% #.10f\n", -1.));

	printf("%d\n",ft_printf("%# .10f\n", 1.));
	printf("%d\n",ft_printf("%# .10f\n", 0.));
	printf("%d\n",ft_printf("%# .10f\n", -1.));



	printf("%d\n",ft_printf("%#-#-#-#-#-#-#-#-#-#-#-#-f\n", 1.));
	printf("%d\n",ft_printf("%#-#-#-#-#-#-#-#-#-#-#-#-f\n", 0.));
	printf("%d\n",ft_printf("%#-#-#-#-#-#-#-#-#-#-#-#-f\n", -1.));

	printf("%d\n",ft_printf("%-#-#-#-#-#-#-#-#-#-#-#-#f\n", 1.));
	printf("%d\n",ft_printf("%-#-#-#-#-#-#-#-#-#-#-#-#f\n", 0.));
	printf("%d\n",ft_printf("%-#-#-#-#-#-#-#-#-#-#-#-#f\n", -1.));

	printf("%d\n",ft_printf("%+#+#+#+#+#+#+#+#+#+#+#+#f\n", 1.));
	printf("%d\n",ft_printf("%+#+#+#+#+#+#+#+#+#+#+#+#f\n", 0.));
	printf("%d\n",ft_printf("%+#+#+#+#+#+#+#+#+#+#+#+#f\n", -1.));

	printf("%d\n",ft_printf("%#+#+#+#+#+#+#+#+#+#+#+#+f\n", 1.));
	printf("%d\n",ft_printf("%#+#+#+#+#+#+#+#+#+#+#+#+f\n", 0.));
	printf("%d\n",ft_printf("%#+#+#+#+#+#+#+#+#+#+#+#+f\n", -1.));

	printf("%d\n",ft_printf("%-+-+-+-+-+-+-+-+-+-+-+-+f\n", 1.));
	printf("%d\n",ft_printf("%-+-+-+-+-+-+-+-+-+-+-+-+f\n", 0.));
	printf("%d\n",ft_printf("%-+-+-+-+-+-+-+-+-+-+-+-+f\n", -1.));

	printf("%d\n",ft_printf("%+-+-+-+-+-+-+-+-+-+-+-+-f\n", 1.));
	printf("%d\n",ft_printf("%+-+-+-+-+-+-+-+-+-+-+-+-f\n", 0.));
	printf("%d\n",ft_printf("%+-+-+-+-+-+-+-+-+-+-+-+-f\n", -1.));

	printf("%d\n",ft_printf("%+0+0+0+0+0+0+0+0+0+0+0+0f\n", 1.));
	printf("%d\n",ft_printf("%+0+0+0+0+0+0+0+0+0+0+0+0f\n", 0.));
	printf("%d\n",ft_printf("%+0+0+0+0+0+0+0+0+0+0+0+0f\n", -1.));

	printf("%d\n",ft_printf("%0 0 0 0 0 0 0 0 0 0 0 0 f\n", 1.));
	printf("%d\n",ft_printf("%0 0 0 0 0 0 0 0 0 0 0 0 f\n", 0.));
	printf("%d\n",ft_printf("%0 0 0 0 0 0 0 0 0 0 0 0 f\n", -1.));

	printf("%d\n",ft_printf("% 0 0 0 0 0 0 0 0 0 0 0 0f\n", 1.));
	printf("%d\n",ft_printf("% 0 0 0 0 0 0 0 0 0 0 0 0f\n", 0.));
	printf("%d\n",ft_printf("% 0 0 0 0 0 0 0 0 0 0 0 0f\n", -1.));

	printf("%d\n",ft_printf("% - - - - - - - - - - - -f\n", 1.));
	printf("%d\n",ft_printf("% - - - - - - - - - - - -f\n", 0.));
	printf("%d\n",ft_printf("% - - - - - - - - - - - -f\n", -1.));

	printf("%d\n",ft_printf("%- - - - - - - - - - - - f\n", 1.));
	printf("%d\n",ft_printf("%- - - - - - - - - - - - f\n", 0.));
	printf("%d\n",ft_printf("%- - - - - - - - - - - - f\n", -1.));

	printf("%d\n",ft_printf("%#0#0#0#0#0#0#0#0#0#0#0#0f\n", 1.));
	printf("%d\n",ft_printf("%#0#0#0#0#0#0#0#0#0#0#0#0f\n", 0.));
	printf("%d\n",ft_printf("%#0#0#0#0#0#0#0#0#0#0#0#0f\n", -1.));

	printf("%d\n",ft_printf("%0#0#0#0#0#0#0#0#0#0#0#0#f\n", 1.));
	printf("%d\n",ft_printf("%0#0#0#0#0#0#0#0#0#0#0#0#f\n", 0.));
	printf("%d\n",ft_printf("%0#0#0#0#0#0#0#0#0#0#0#0#f\n", -1.));

	printf("%d\n",ft_printf("% # # # # # # # # # # # #f\n", 1.));
	printf("%d\n",ft_printf("% # # # # # # # # # # # #f\n", 0.));
	printf("%d\n",ft_printf("% # # # # # # # # # # # #f\n", -1.));

	printf("%d\n",ft_printf("%# # # # # # # # # # # # f\n", 1.));
	printf("%d\n",ft_printf("%# # # # # # # # # # # # f\n", 0.));
	printf("%d\n",ft_printf("%# # # # # # # # # # # # f\n", -1.));




	printf("%d\n",ft_printf("%#-+f\n", 1.));
	printf("%d\n",ft_printf("%#-+f\n", 0.));
	printf("%d\n",ft_printf("%#-+f\n", -1.));

	printf("%d\n",ft_printf("%#- f\n", 1.));
	printf("%d\n",ft_printf("%#- f\n", 0.));
	printf("%d\n",ft_printf("%#- f\n", -1.));

	printf("%d\n",ft_printf("%#- f\n", 1.));
	printf("%d\n",ft_printf("%#- f\n", 0.));
	printf("%d\n",ft_printf("%#- f\n", -1.));

	printf("%d\n",ft_printf("%#+0f\n", 1.));
	printf("%d\n",ft_printf("%#+0f\n", 0.));
	printf("%d\n",ft_printf("%#+0f\n", -1.));

	printf("------------------------------\n------------------------------\n");

	// ------------- Ramdom Test -------------

	printf("------------- Ramdom Test -------------\n");

	printf("%d\n",ft_printf("%f\n", 123456789789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.0f\n", 123456789789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.10f\n", 123456789789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.20f\n", 123456789789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.30f\n", 123456789789.12345698745632123654789632587414785236963258741147852369856321452147848));

	printf("%d\n",ft_printf("%f\n", 7856981.12345698745632123654789632587414785236963258741147852369856321452147848455646545648945615645658456468465));
	printf("%d\n",ft_printf("%.0f\n", 7856981.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.10f\n", 7856981.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.20f\n", 7856981.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.30f\n", 7856981.12345698745632123654789632587414785236963258741147852369856321452147848));

	printf("%d\n",ft_printf("%f\n", 89123456789.1234236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.0f\n", 89123456789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.10f\n", 89123456789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.20f\n", 89123456789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.30f\n", 89123456789.12345698745632123654789632587414785236963258741147852369856321452147848));

	printf("%d\n",ft_printf("%f\n", 1234756789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.0f\n", 1234756789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.10f\n", 1234756789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.20f\n", 1234756789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("%d\n",ft_printf("%.30f\n", 1234756789.12345698745632123654789632587414785236963258741147852369856321452147848));

	printf("%d\n",ft_printf("%f\n", 0.0));
	printf("%d\n",ft_printf("%.0f\n", 0.0));
	printf("%d\n",ft_printf("%.10f\n", 0.0));
	printf("%d\n",ft_printf("%.20f\n", 0.0));
	printf("%d\n",ft_printf("%.30f\n", 0.0));

	printf("%d\n",ft_printf("%f\n", 0.5));
	printf("%d\n",ft_printf("%.0f\n", 0.5));
	printf("%d\n",ft_printf("%.10f\n", 0.5));
	printf("%d\n",ft_printf("%.20f\n", 0.5));
	printf("%d\n",ft_printf("%.30f\n", 0.5));

	printf("%d\n",ft_printf("%f\n", 0.1));
	printf("%d\n",ft_printf("%.0f\n", 0.1));
	printf("%d\n",ft_printf("%.10f\n", 0.1));
	printf("%d\n",ft_printf("%.20f\n", 0.1));
	printf("%d\n",ft_printf("%.30f\n", 0.1));

	// ------------- limit ---------------

	printf("------- limit --------\n");
	printf("%d\n",ft_printf("%f\n", FLT_MIN));
	printf("%d\n",ft_printf("%f\n", (double)DBL_MIN));
	printf("%d\n",ft_printf("%Lf\n", (long double)LDBL_MIN));
	printf("%d\n",ft_printf("%f\n", FLT_MAX));
	printf("%d\n",ft_printf("%f\n", (double)DBL_MAX));
	printf("%d\n",ft_printf("%Lf\n", (long double)LDBL_MAX));
	printf("%d\n",ft_printf("%f\n", 123456789123456789123456789.12345698745632123654789632587414785236963258741147852369856321452147848));
	printf("----------------------\n----------------------\n");

}
}

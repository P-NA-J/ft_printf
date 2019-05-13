/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_trueprintf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:06:43 by darbib            #+#    #+#             */
/*   Updated: 2019/04/24 14:32:42 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"

int main()
{
	true_d_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	true_i_tests();
	printf("\n\n #### FIN TEST I ####\n\n");
	true_o_tests();
	printf("\n\n #### FIN TEST O ####\n\n");
	true_u_tests();
	printf("\n\n #### FIN TEST U ####\n\n");
	true_x_tests();
	printf("\n\n #### FIN TEST X ####\n\n");
	true_bigx_tests();
	printf("\n\n #### FIN TEST BIG_X ####\n\n");
/*	true_c_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	true_s_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	true_p_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	true_f_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
*/
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ourprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/24 14:33:11 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"

int main()
{
	d_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	i_tests();
	printf("\n\n #### FIN TEST I ####\n\n");
	o_tests();
	printf("\n\n #### FIN TEST O ####\n\n");
	u_tests();
	printf("\n\n #### FIN TEST U ####\n\n");
	x_tests();
	printf("\n\n #### FIN TEST X ####\n\n");
	bigx_tests();
	printf("\n\n #### FIN TEST BIG_X ####\n\n");
/*	c_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	s_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	p_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
	f_tests();
	printf("\n\n #### FIN TEST D ####\n\n");
*/
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_s_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/29 15:11:04 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void true_s_test(void)
{
	char *str;

	if(!(str = malloc(5)))
		return ;
	str[0] = 'n';
	str[1] = 'n';
	str[2] = 'n';
	str[3] = 'n';
	str[4] = 'n';
//	-------- Test basique unitaire --------

	printf("-------- Test basique unitaire --------\n");
	printf("%d\n", printf("%s\n", "coucou"));
	printf("%d\n", printf("%s\n", NULL));
	printf("%d\n", printf("%s\n", ""));

	printf("%d\n", printf("%-s\n", "coucou"));
	printf("%d\n", printf("%-s\n", NULL));
	printf("%d\n", printf("%-s\n", ""));

	printf("%d\n", printf("%5s\n", "coucou"));
	printf("%d\n", printf("%5s\n", NULL));
	printf("%d\n", printf("%5s\n", ""));

	printf("%d\n", printf("%10s\n", "coucou"));
	printf("%d\n", printf("%10s\n", NULL));
	printf("%d\n", printf("%10s\n", ""));

	printf("%d\n", printf("%.10s\n", "coucou"));
	printf("%d\n", printf("%.10s\n", NULL));
	printf("%d\n", printf("%.10s\n", ""));

	printf("%d\n", printf("%.s\n", "coucou"));
	printf("%d\n", printf("%.s\n", NULL));
	printf("%d\n", printf("%.s\n", ""));

	printf("%d\n", printf("%.0s\n", "coucou"));
	printf("%d\n", printf("%.0s\n", NULL));
	printf("%d\n", printf("%.0s\n", ""));

	printf("%d\n", printf("%1.0s\n", "coucou"));
	printf("%d\n", printf("%1.0s\n", NULL));
	printf("%d\n", printf("%1.0s\n", ""));

	printf("%d\n", printf("%10.0s\n", "coucou"));
	printf("%d\n", printf("%10.0s\n", NULL));
	printf("%d\n", printf("%10.0s\n", ""));

	printf("%d\n", printf("%1.1s\n", "coucou"));
	printf("%d\n", printf("%1.1s\n", NULL));
	printf("%d\n", printf("%1.1s\n", ""));

	printf("%d\n", printf("%10.1s\n", "coucou"));
	printf("%d\n", printf("%10.1s\n", NULL));
	printf("%d\n", printf("%10.1s\n", ""));

	printf("%d\n", printf("%10.10s\n", "coucou"));
	printf("%d\n", printf("%10.10s\n", NULL));
	printf("%d\n", printf("%10.10s\n", ""));

	printf("---------------------------------------\n---------------------------------------\n");

// -------- Test avancés --------

	printf("-------- Test avancés --------\n");

	printf("%d\n", printf("%10.10s %.s %s\n", "coucou", NULL, ""));
	printf("%d\n", printf("%10.10s %.s %s\n", NULL, "coucou", ""));
	printf("%d\n", printf("%10.10s %.s %s\n", "", NULL, "coucou"));

	printf("%d\n", printf("%s\n", str));
	printf("%d\n", printf("%10s\n", str));
	printf("%d\n", printf("%.10s\n", str));
	printf("%d\n", printf("%10.10s\n", str));
	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str[3] = 4;
	str[4] = 5;
	printf("%d\n", printf("%s\n", str));
	printf("%d\n", printf("%10s\n", str));
	printf("%d\n", printf("%.10s\n", str));
	printf("%d\n", printf("%10.10s\n", str));
	str = NULL;
	printf("%d\n", printf("%s\n", str));
	printf("%d\n", printf("%10s\n", str));
	printf("%d\n", printf("%.10s\n", str));
	printf("%d\n", printf("%10.10s\n", str));
	printf("%d\n", printf("%10.10s%%%%SSSSssss%%%s%%%sssss%sss#ss#%s %.s %s\n", "coucou", NULL, "", "Je suis Nyctalope", "Je savais bien que t'étais une salope", "RaPt0R J3sUs N0u5 S1Uv3rAs T0Us", NULL));
	printf("%d\n", printf("%2147483647.2147483647s", "JUUUUUUUUUUUUL EH MERCE HEIN"));
	printf("%d\n", printf("%2147483647.s", "JUUUUUUUUUUUUL EH MERCE HEIN"));
	printf("%d\n", printf("%2147483647.0s", "JUUUUUUUUUUUUL EH MERCE HEIN"));
	printf("%d\n", printf("%.2147483647s", "JUUUUUUUUUUUUL EH MERCE HEIN"));
}

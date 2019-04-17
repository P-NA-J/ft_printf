/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:22:00 by pauljull          #+#    #+#             */
/*   Updated: 2019/04/13 09:03:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **float_tab(void)
{
	char **f_tab;
	int i;

	i = 0;
	if (!(f_tab = (char **)malloc(sizeof(char *) * 23)))
		return (NULL);
	while (i < 23)
	{
		if (!(f_tab[i] = (char *)malloc(sizeof(char) * 2000)))
			return (NULL);
		f_tab[i][2000] = 0;
		zero_filling(f_tab[i], 2000);
		i += 1;
	}
	strcpy(f_tab[0], "0.5");
	strcpy(f_tab[1], "0.25");
	strcpy(f_tab[2], "0.125");
	strcpy(f_tab[3], "0.0625");
	strcpy(f_tab[4], "0.03125");
	strcpy(f_tab[5], "0.015625");
	strcpy(f_tab[6], "0.0078125");
	strcpy(f_tab[7], "0.0039062");
	strcpy(f_tab[8], "0.0019531");
	strcpy(f_tab[9], "0.0009765625");
	strcpy(f_tab[10], "0.00048828125");
	strcpy(f_tab[11], "0.000244140625");
	strcpy(f_tab[12], "0.0001220703125");
	strcpy(f_tab[13], "0.00006103515625");
	strcpy(f_tab[14], "0.000030517578125");
	strcpy(f_tab[15], "0.0000152587890625");
	strcpy(f_tab[16], "0.00000762939453125");
	strcpy(f_tab[17], "0.000003814697265625");
	strcpy(f_tab[18], "0.0000019073486328125");
	strcpy(f_tab[19], "0.00000095367431640625");
	strcpy(f_tab[20], "0.000000476837158203125");
	strcpy(f_tab[21], "0.0000002384185791015625");
	strcpy(f_tab[22], "0.00000011920928955078125");
}

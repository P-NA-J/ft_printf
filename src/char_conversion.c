/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 14:30:14 by darbib            #+#    #+#             */
/*   Updated: 2019/04/19 16:41:03 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** %c conversion main function
** feed the flag node with char filled tab
** return 1 if success 0 else
*/
int char_conversion(t_plist *list, va_list arg)
{
	int vlc;
	int i;

	vlc = higher_value(0, list->width, 1);
	if (!(list->tab = ft_strnew(vlc)))
		return (0);
	if (list->flag & MINUS_FLAG)
		tab[vlc] = (char)arg;
	else
		tab[0] = (char)arg;	
	i = 0;
	while (i < vlc + 1)
	{
		if (tab[i] != (char)arg)
			tab[i] = ' ';
		i++;
	}
	return (1);
}

#include <stdio.h>
#include "../include/ft_printf.h"
#include "../libft/libft.h"
#include <limits.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>

int		nb_digit_f(unsigned long div)
{
	int i;

	i = 0;
	while (div)
	{
		i += 1;
		div /= 10;
	}
	return (i);
}

char	*div_compute(char s_temp[100], unsigned long div)
{
	int	res;
	char	tmp[100];

	res = ft_atoi(s_temp) / div;
	ft_bzero(tmp, 100);
	if (!div)
		return ("0");
	ft_strcpy(tmp, s_temp);
	printf("s_temp avant = |%s|\n", s_temp);
	ft_bzero(s_temp, 100);
	ft_strcpy(s_temp, ft_itoa(ft_atoi(tmp) - res * div));
	printf("s_temp apres = |%s|\n", s_temp);
	printf("DIVISION = %d\nRESTE = %lu\n\n", res, ft_atoi(tmp) - res * div);
	return (ft_itoa(res));
}

void	ft_div_str_cpy(char *dest, char *src, int dig)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (j < dig)
	{
		if (src[j] == '.')
			j += 1;
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
}

void	init_division(char *tab, char s[1000], char s_temp[1000], unsigned long div)
{
	int	n_dig;

	ft_strncpy(tab, "0.", 2);
	n_dig = nb_digit_f(div);
	printf("n_dig = %d\n", n_dig);
	if (n_dig == 1)
	{
		ft_div_str_cpy(s_temp, s, 3);
		ft_strcat(tab, div_compute(s_temp, div));
		s += 3;
	}
	else
	{
		ft_div_str_cpy(s_temp, s, n_dig + 1);
		printf("s_temp init = |%s|\n", s_temp);
		zero_filling(tab + 2, n_dig - 2);
		ft_strcat(tab, div_compute(s_temp, div));
		s += n_dig + 1;
	}
	ft_strcpy(s_temp, ft_itoa(ft_atoi(s_temp) * 10 + *s - '0'));
}

int		ft_nstrchr(char *s, char c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
			return (1);
		s += 1;
	}
	return (0);
}

char	*ft_div_str(char s[1000], unsigned long div)
{
	int				i;
	int				n_dig;
	char			*tab;
	char			s_temp[100];

	printf("s_start = |%s|\n\n", s);
	n_dig = nb_digit_f(div);
	ft_bzero(s_temp, 100);
	if (!(tab = (char *)malloc(1000)))
		return (NULL);
	ft_bzero(tab, 1000);
	init_division(tab, s , s_temp, div);
	s += (n_dig == 1 ? 4 : n_dig + 2);
	while ((ft_atoi(s_temp) != 0) || ft_nstrchr(s, '0'))
	{
		ft_strcat(tab, div_compute(s_temp, div));
		ft_strcpy(s_temp, ft_itoa(ft_atoi(s_temp) * 10 + *s - '0'));
		printf("%d = %d + %d\n", ft_atoi(s_temp) * 10 + *s - '0', ft_atoi(s_temp) * 10, *s - '0');
		s += 1;
	}
	return (tab);
}

int main()
{
	char tab[100];
	unsigned long div;

	div = 1 << 1;
	printf("DIVISEUR : %lu\n", div);
	zero_filling(tab, 99);
	tab[99] = 0;
	strncpy(tab, "1.5000000000000000000000000000000", 48);
	printf("|%s|\n|0.75|\n\n",ft_div_str(tab, div));


	div = 1 << 4;
	printf("DIVISEUR : %lu\n", div);
	zero_filling(tab, 99);
	tab[99] = 0;
	strncpy(tab, "1.5000000000000000000000000000000", 48);
	printf("|%s|\n|0.09375|\n\n",ft_div_str(tab, div));


	div = 1 << 8;
	printf("DIVISEUR : %lu\n", div);
	zero_filling(tab, 99);
	tab[99] = 0;
	strncpy(tab, "1.5000000000000000000000000000000", 48);
	printf("|%s|\n|0.005859375|\n\n",ft_div_str(tab, div));


	div = 1 << 10;
	printf("DIVISEUR : %lu\n", div);
	zero_filling(tab, 99);
	tab[99] = 0;
	strncpy(tab, "1.5000000000000000000000000000000", 48);
	printf("|%s|\n|0.00146484375|\n\n",ft_div_str(tab, div));


	div = 1 << 15;
	printf("DIVISEUR : %lu\n", div);
	zero_filling(tab, 99);
	tab[99] = 0;
	strncpy(tab, "1.5000000000000000000000000000000", 48);
	printf("|%s|\n|0.0000457763671875|\n\n",ft_div_str(tab, div));

	return (0);
}

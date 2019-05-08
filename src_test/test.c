#include <stdio.h>
#include "../include/ft_printf.h"
#include "../libft/libft.h"
#include <limits.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>

int		nb_digit_f(int div)
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

char	*div_compute(char s[1000], char s_temp[10], unsigned long div)
{
	int	res;

	res = ft_atoi(s_temp) / div;
	printf("s_temp : %s\ns : %s\n", s_temp, s);
	printf("ft_atoi(s_temp) = %d\ndiv = %lu\nres = %d\n",ft_atoi(s_temp), div, res);
	if (!div)
		return ("0");
	ft_strcpy(s_temp, ft_itoa(ft_atoi(s_temp - res * div)));
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

char	*ft_div_str(char s[1000], unsigned long div)
{
	int				i;
	int				n_dig;
	char			*tab;
	char			s_temp[10];

	i = ft_strlen(s);
	n_dig = nb_digit_f(div);
	if (!(tab = (char *)malloc(1000)))
		return (NULL);
	while (s[i - 1] == '0' && (i - 1) >= 0)
		i -= 1;
	if (ft_strnchr(s, '.', n_dig))
	{
		ft_div_str_cpy(s_temp, s, n_dig + 1);
		s += n_dig + 1;
		ft_strcpy(tab, "0.");
	}
	else
	{
		ft_strncpy(s_temp, s, n_dig);
		s += n_dig;
	}
	while (s != s + i)
	{
		printf("########################\n\n");
		ft_strcat(tab, div_compute(s, s_temp, div));
		ft_strcpy(s_temp, ft_itoa(ft_atoi(s_temp) * 10 + *s - '0'));
		printf("s_temp : %s\ns : %s\ntab = %s\n", s_temp, s, tab);
		s += 1;
		printf("########################\n\n");
	}
	return (tab);
}

int main()
{
	char tab[1000];
	char str[16];
	unsigned long div;

	div = 128;
	strcpy(tab, "1.256893250250000000000000000000000000000");
	printf("Le resultat de la division de %s par %lu est |%s|\n", tab, div, ft_div_str(tab, div));
	return (0);
}

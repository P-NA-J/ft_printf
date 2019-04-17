#include <unistd.h>
#include <stdlib.h>


unsigned long		power_unsigned(long nb, long p)
{
	unsigned long result;

	result = nb;
	if (p == 0)
		return (1);
	while (p - 1)
	{
		result *= nb;
		p -= 1;
	}
	return (result);
}

unsigned long		power_rank(unsigned long nb, unsigned long len_base)
{
	unsigned long result;

	result = 0;
	if (nb == 0)
		return (0);
	while (nb / power_unsigned(len_base, result))
		result += 1;
	return (result - 1);
}

long	nb_is_neg(long nb, unsigned long iter, char *base)
{
	ft_putchar('-');
	ft_putchar(base[-(nb / power_unsigned(ft_strlen(base), iter))]);
	return (-nb - (-nb / power_unsigned(ft_strlen(base), iter)) * power_unsigned(ft_strlen(base), iter));
}

void	ft_putnbr_base(long nb, char *base)
{
	long		len_base;
	long		iter;

	len_base = ft_strlen(base);
	iter = power_rank(nb, len_base);
	if (nb < 0)
	{
		nb = nb_is_neg(nb, iter, base);
		iter -= 1;
	}
	while (iter >= 0)
	{
		ft_putchar(base[nb / power_unsigned(len_base, iter)]);
		nb -= (nb / power_unsigned(len_base, iter)) * power_unsigned(len_base, iter);
		iter -= 1;
	}
}

void	ft_putnbr_base_unsigned(unsigned long nb, char *base)
{
	unsigned long		len_base;
	long		iter;

	len_base = ft_strlen(base);
	iter = power_rank(nb, len_base);
	printf("len_base = %lu\niter = %ld\n", len_base, iter);
/*	while (iter >= 0)
	{
		ft_putchar(base[nb / power(len_base, iter)]);
		nb -= (nb / power(len_base, iter)) * power(len_base, iter);
		iter -= 1;
	}
*/}

int	ft_digit(unsigned long nb, char *base)
{
	int result;

	result = power_rank(nb, ft_strlen(base));
	return (result + 1);
}
/*
void	ft_fill_tab(int nb, char *base, char *tab, int digit)
{
	int i;
	int len_base;

	len_base = ft_strlen(base);
	i = 0;
	while (digit >= 0)
	{
		tab[i] = base[nb / power(len_base, digit)];
		nb -= (nb / power(len_base, digit)) * power(len_base, digit);
		i += 1;
		digit -= 1;
	}
}

char *ft_itoa_base(int nb, char *base)
{
	char *result;
	int nb_digit;

	nb_digit = ft_digit(nb, base);
	if (!(result = (char *)malloc(sizeof(char) * (nb_digit + 1))))
		return (NULL);
	result[nb_digit] = 0;
	if (nb < 0)
	{
		result[0] = '-';
		result[1] = base[-nb / power(ft_strlen(base), nb_digit - 2)];
		nb = -nb - (-nb / power(ft_strlen(base), nb_digit - 2)) * power(ft_strlen(base), nb_digit - 2);
		ft_fill_tab(nb, base, &result[2], nb_digit - 3);
	}
	else
		ft_fill_tab(nb, base, result, nb_digit - 1);
	return (result);
}
*/

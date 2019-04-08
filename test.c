#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <float.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 0)
	{
		ft_putchar('-');
		if (n > -10)
			ft_putnbr(-n);
		else
		{
			ft_putnbr(-(n / 10));
			ft_putchar(-(n % 10) + '0');
		}
	}
}
/*
void	ft_print_bit_float(float fl)
{
	char	byte;

	byte = 1 << 31;
	while (byte)
	{
		if (byte & fl)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		byte >>= 1;
	}
}

double f;
	double copy;
	int entire_p;

	entire_p = 0;
	f = 569568.111119;
	copy = f;
	while ((int)f > 0)
	{
		f /= 10;
		entire_p += 1;
	}
	f *= 1000000;
	entire_p = f;
//	ft_putnbr(entire_p); // affichage partie entiere
	copy -= entire_p; // on garde que la partie fractionnaire
//	write(1, ".", 1); //point separation
	copy *= 10;
	printf("%f\n", copy);
	copy *= 10;
	printf("%f\n", copy);
	copy *= 10;
	printf("%f\n", copy);
	copy *= 10;
	printf("%f\n", copy);
	copy *= 10;
	printf("%f\n", copy);
	copy *= 10;
	printf("%f\n", copy);

*/

double	power(double base, double exposant)
{
	double count;
	double result;

	count = 1;
	if (exposant == 0)
		return (1);
	result = base;
	while (count < exposant)
	{
		result *= base;
		count += 1;
	}
	return (result);
}


void	print_bit_int(unsigned int i, int size)
{
	unsigned int byte = 1 << size;

	while (byte)
	{
		if (i & byte)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		byte >>= 1;
	}
	printf("\n");
}

void dump_bin(const char* name, unsigned int value, int taille)
{
	int i;
	printf("%s: ", name);
	for(i = taille-1; i>=0; i--)
	{
		printf("%d", (value >> i) & 1);
	}
	printf("\n");
}

void	double_gen(int signe, int mantisse, int exposant)
{
	double res;
	double mantissa;
	int count;
	unsigned int mask;
	unsigned int index_b;

	index_b = 1;
	mask = 1 << 22;
	count = 23;
	mantissa = 1;
	while (count)
	{
		if (mask & mantisse)
		{
			mantissa += power(2, (-1) * index_b);
			printf("%d\n" ,(-1) * index_b);
		}
		index_b += 1;
		count -= 1;
		mask >>= 1;
	}
	res = power(2, exposant - 127) * mantissa;
	printf("%f\n", res);
}

void float2bin(float f)
{
	unsigned int i, mantisse, signe, exposant; //On récupère f dans un entier sans le convertir en entier
	i = *(int *) &f; //Le signe est le bit de poids fort
	signe = i >> 31; //L'exposant c'est les huit bits suivants de poids fort
	exposant = (i >> 23) & 0xff; //Les 23 bits restants c'est la mantisse
	mantisse = i & 0x007fffff;
	dump_bin("signe", signe, 1);
	dump_bin("mantisse", mantisse, 23);
	dump_bin("exposant", exposant, 8);

	double_gen(signe, mantisse, exposant);
}

void	zero_filling(char *str, int max)
{
	int i;

	i = 0;
	while (i < max)
		str[i++] = '0';
}

void	num_filling(char *str, unsigned long long nb)
{
	printf("%llu\n", nb);
}

int main()
{
	printf("|%+0.0d|\n", 0);
	printf("|%+d|\n", 0);
	return (0);
}

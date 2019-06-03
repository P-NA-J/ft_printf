#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

int		is_number(char *str)
{
	while (*str)
	{
		if (*str > '0' && *str <= '9')
			return (1);
		str += 1;
	}
	return (0);
}

char	*div_str(char *mantissa, __uint128_t div)
{
	char	*result;
	__uint128_t		tmp;

	int i;

	i = 0;
	tmp = 0;
	result = NULL;
	tmp = *mantissa - '0';
//	printf("%lu\n", (unsigned long)div);
	result = ft_strjoinf(result, ft_itoa(tmp / div), 1);
	tmp = tmp % div;
	if (*(mantissa + 1) == '.')
	{
		mantissa += 1;
		result = ft_strjoinf(result, ".", 1);
	}
	mantissa += 1;
	tmp = tmp * 10 + *mantissa - '0';
	while ((tmp || (!tmp && is_number(mantissa))))
	{
		result = ft_strjoinf(result, ft_itoa(tmp / div), 1);
//		printf("%d\n", (int)(tmp / div));
//		printf("result : %s\n", result);
		tmp = tmp % div;
//		printf("%lu\n", (unsigned long)(tmp%div));
//		printf("%lu\n", (unsigned long)tmp);
		mantissa += 1;
		tmp = tmp * 10 + *mantissa - '0';
//		printf("%lu\n", (unsigned long)tmp);
		
		
		
//		printf("%.100lf\n", 0.5 / 70368744177664);
//		printf("%s\n", mantissa);
//		printf("i = %d\n\n", i);
	}
//	printf("result %s\n", result);
	result = ft_strjoinf(result, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000", 1);
	return (result);
}

int main()
{
	double dbl;

	dbl = 5.96958885555328886318626388756E-154;
	printf("%.800lf\n", dbl);

	
	return (0);
}

#include <stdio.h>
#include "../include/ft_printf.h"
// 18446744073709551574LLU /
int main()
{

//	printf("%d\n",printf("%3d\n", 42));
	ft_printf("%lo\n",  (long)-42);
	printf("%lo",  (long)-42);

	return (0);
}

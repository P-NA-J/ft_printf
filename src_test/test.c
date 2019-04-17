#include <stdio.h>

char			*ft_itoa_base(long nb, char *base);

int main()
{

	printf("|%s|\n", ft_itoa_base(-568921, "0123456789"));
	return (0);
}

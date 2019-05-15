#include "../include/ft_printf.h"
#include <limits.h>

void	mult_str_test(void)
{
	char **tab;

	tab = floating_tab();

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = (1 << 1);
	printf("|%s|\n\n", mult_str(tab[63], mult));

// #########################################################################################################################################

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = (1 << 20);
	printf("|%s|\n\n", mult_str(tab[63], mult));

// #########################################################################################################################################

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = (1 << 40);
	printf("|%s|\n\n", mult_str(tab[63], mult));

// #########################################################################################################################################

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = (1 << 60);
	printf("|%s|\n\n", mult_str(tab[63], mult));

// #########################################################################################################################################

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = ULONG_MAX;
	printf("|%s|\n\n", mult_str(tab[63], mult));

// #########################################################################################################################################

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[0], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[10], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[20], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[30], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[40], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[50], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[60], mult));

	mult = 0;
	printf("|%s|\n\n", mult_str(tab[63], mult));
}

#include "../include/ft_printf.h"

void	add_str_test(void)
{
	char s1[100];
	char s2[100];

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[0]);
	ft_strcpy(s2, tab[1]);
	printf("OUR  : |%s|\nTRUE : |0.000000000000000000000000000000000000|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[1]);
	ft_strcpy(s2, tab[2]);
	printf("OUR  : |%s|\nTRUE : |0.75|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[2]);
	ft_strcpy(s2, tab[3]);
	printf("OUR  : |%s|\nTRUE : |0.375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[4]);
	ft_strcpy(s2, tab[5]);
	printf("OUR  : |%s|\nTRUE : |0.09375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[6]);
	ft_strcpy(s2, tab[7]);
	printf("OUR  : |%s|\nTRUE : |0.0234375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[8]);
	ft_strcpy(s2, tab[9]);
	printf("OUR  : |%s|\nTRUE : |0.005859375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[10]);
	ft_strcpy(s2, tab[11]);
	printf("OUR  : |%s|\nTRUE : |0.00146484375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[12]);
	ft_strcpy(s2, tab[13]);
	printf("OUR  : |%s|\nTRUE : |0.0003662109375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[14]);
	ft_strcpy(s2, tab[15]);
	printf("OUR  : |%s|\nTRUE : |0.000091552734375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[16]);
	ft_strcpy(s2, tab[17]);
	printf("OUR  : |%s|\nTRUE : |0.00002288818359375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[18]);
	ft_strcpy(s2, tab[19]);
	printf("OUR  : |%s|\nTRUE : |0.0000057220458984375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[20]);
	ft_strcpy(s2, tab[21]);
	printf("OUR  : |%s|\nTRUE : |0.000001430511474609375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[22]);
	ft_strcpy(s2, tab[23]);
	printf("OUR  : |%s|\nTRUE : |0.00000035762786865234375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[24]);
	ft_strcpy(s2, tab[25]);
	printf("OUR  : |%s|\nTRUE : |0.0000000894069671630859375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[26]);
	ft_strcpy(s2, tab[27]);
	printf("OUR  : |%s|\nTRUE : |0.000000022351741790771484375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[28]);
	ft_strcpy(s2, tab[29]);
	printf("OUR  : |%s|\nTRUE : |0.00000000558793544769287109375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[30]);
	ft_strcpy(s2, tab[31]);
	printf("OUR  : |%s|\nTRUE : |0.0000000013969838619232177734375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[32]);
	ft_strcpy(s2, tab[33]);
	printf("OUR  : |%s|\nTRUE : |0.000000000349245965480804443359375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[34]);
	ft_strcpy(s2, tab[35]);
	printf("OUR  : |%s|\nTRUE : |0.00000000008731149137020111083984375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[36]);
	ft_strcpy(s2, tab[37]);
	printf("OUR  : |%s|\nTRUE : |0.0000000000218278728425502777099609375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[38]);
	ft_strcpy(s2, tab[39]);
	printf("OUR  : |%s|\nTRUE : |0.000000000005456968210637569427490234375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[40]);
	ft_strcpy(s2, tab[41]);
	printf("OUR  : |%s|\nTRUE : |0.00000000000136424205265939235687255859375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[42]);
	ft_strcpy(s2, tab[43]);
	printf("OUR  : |%s|\nTRUE : |0.0000000000003410605131648480892181396484375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[44]);
	ft_strcpy(s2, tab[45]);
	printf("OUR  : |%s|\nTRUE : |0.000000000000085265128291212022304534912109375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[46]);
	ft_strcpy(s2, tab[47]);
	printf("OUR  : |%s|\nTRUE : |0.00000000000002131628207280300557613372802734375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[48]);
	ft_strcpy(s2, tab[49]);
	printf("OUR  : |%s|\nTRUE : |0.0000000000000053290705182007513940334320068359375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[50]);
	ft_strcpy(s2, tab[51]);
	printf("OUR  : |%s|\nTRUE : |0.000000000000001332267629550187848508358001708984375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[52]);
	ft_strcpy(s2, tab[53]);
	printf("OUR  : |%s|\nTRUE : |0.00000000000000033306690738754696212708950042724609375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[54]);
	ft_strcpy(s2, tab[55]);
	printf("OUR  : |%s|\nTRUE : |0.0000000000000000832667268468867405317723751068115234375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[56]);
	ft_strcpy(s2, tab[57]);
	printf("OUR  : |%s|\nTRUE : |0.000000000000000020816681711721685132943093776702880859375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[58]);
	ft_strcpy(s2, tab[59]);
	printf("OUR  : |%s|\nTRUE : |0.00000000000000000520417042793042128323577344417572021484375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[60]);
	ft_strcpy(s2, tab[61]);
	printf("OUR  : |%s|\nTRUE : |0.0000000000000000013010426069826053208089433610439300537109375|\n", add_str(s1, s2));

	zero_filling(s1, 99);
	zero_filling(s2, 99);
	s1[99] = 0;
	s2[99] = 0;
	ft_strcpy(s1, tab[62]);
	ft_strcpy(s2, tab[63]);
	printf("OUR  : |%s|\nTRUE : |0.000000000000000000325260651745651330202235840260982513427734375|\n", add_str(s1, s2));
}

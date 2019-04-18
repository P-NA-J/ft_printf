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
}

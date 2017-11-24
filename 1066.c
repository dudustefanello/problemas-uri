#include <stdio.h>

int main()
{
	int ent[5];
	int i, par = 0, impar = 0, positivo = 0, negativo = 0;

	for(i = 1; i <= 5; i++)
	{
		scanf("%i", &ent[i]);

		if ((ent[i] % 2) == 0)
		{
			par = par + 1;
		}

		else
		{
			impar = impar + 1;
		}

		if (ent[i] > 0)
		{
			positivo = positivo + 1;
		}

		else if (ent[i] < 0)
		{
			negativo = negativo + 1;
		}
	}

	printf("%i valor(es) par(es)\n", par);
	printf("%i valor(es) impar(es)\n", impar);
	printf("%i valor(es) positivo(s)\n", positivo);
	printf("%i valor(es) negativo(s)\n", negativo);
	
	return 0;
}
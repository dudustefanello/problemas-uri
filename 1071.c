#include <stdio.h>

int main()
{
	int i, x[2], aux, soma = 0;

	scanf("%i %i", &x[0], &x[1]);

	if (x[0] > x[1])
	{
		aux = x[1];
		x[1] = x[0];
		x[0] = aux;
	}

	for(i = x[0] + 1; i < x[1]; i++)
	{
		if ((i % 2) != 0)
		{
			soma = soma + i;
		}
	}

	printf("%i\n", soma);

	return 0;
}
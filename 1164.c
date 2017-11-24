#include <stdio.h>

int main()
{
	int entrada, soma, i, j, limite;

	scanf("%d", &limite);

	for(i = 1; i <= limite; i++)
	{
		soma = 0;

		scanf("%d", &entrada);

		for(j = 1; j < entrada; j++)
		{
			if(entrada % j == 0)
			{
				soma += j;
			}
		}

		if(soma == entrada)
			printf("%d eh perfeito\n", entrada);

		else
			printf("%d nao eh perfeito\n", entrada);
	}
}
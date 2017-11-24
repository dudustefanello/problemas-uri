#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i, j, aux, tamanho = 3, menor;
	int num[3], original[3];
 
	scanf ("%d %d %d", &num[0], &num[1], &num[2]);
 
		for (i = 0; i < (tamanho - 1); i++)
		{
			menor = i;
 
			for (j = (i + 1); j < tamanho; j++)
			{
				if (num[j] < num[menor])
				{
					menor = j;
				}
			}
 
			if (i != menor)
			{
				aux = num[i];
				num[i] = num[menor];
				num[menor] = aux;
			}
		}
 
	for (i = 0; i < tamanho; i++)
	{
		printf("%d\n", num[i]);
 
		if (i == 2)
		{
			printf("\n");
		}
	}
 
	for (i = 0; i < tamanho; i++)
	{
		printf("%d\n", original[i]);
	}
 
	return 0;
}
#include <stdio.h>

int main()
{
	int n[1001], i, qtd, menor = 1000, posicao;

	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++)
	{
		scanf("%d", &n[i]);

		if(n[i] < menor)
		{
			menor = n[i];
			posicao = i;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
}
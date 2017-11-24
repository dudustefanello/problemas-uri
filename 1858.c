#include <stdio.h>

int main()
{
	int n, menor = 21, saida, i;

	scanf("%d", &n);

	int resposta[n + 1];

	for(i = 1; i <= n; i++)
	{
		scanf("%d", &resposta[i]);

		if(resposta[i] < menor)
		{
			menor = resposta[i];
			saida = i;
		}
	}

	printf("%d\n", saida);
}
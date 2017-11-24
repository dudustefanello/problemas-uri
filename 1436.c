#include <stdio.h>

int main()
{
	int testes, n, i, j, mediana;

	scanf("%d", &testes);

	for(i = 0; i < testes; i++)
	{
		scanf("%d", &n);

		int idade[n];

		mediana = n / 2;

		for (j = 0; j < n; j++)
			scanf("%d", &idade[j]);

		printf("Case %d: %d\n", i + 1, idade[mediana]);
	}
}
#include <stdio.h>

int main()
{
	int n, i, j, k, a, b, quantidade = 0;

	scanf("%d", &n);

	int floresta[n][n], especies[n * n];

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &floresta[i][j]);

	for(i = 1; i <= n * 2; i++)
	{
		scanf("%d %d", &a, &b);
	}

	printf("%d\n", quantidade);
}
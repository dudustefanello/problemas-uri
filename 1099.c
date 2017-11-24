#include <stdio.h>

int main()
{
	int i, j, n, x, y, aux, soma;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);

		soma = 0;

		if (x > y)
		{
			aux = y;
			y = x;
			x = aux;
		}

		for (j = (x + 1); j < y; j++)
		{
			if (j % 2 != 0)
			{
				soma += j;
			}
		}

		printf("%d\n", soma);
	}
}
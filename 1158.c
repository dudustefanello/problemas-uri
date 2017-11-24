#include <stdio.h>

int main()
{
	int n, x, y, soma = 0, i, j;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);

		j = 0;

		while(j < y)
		{
			if(x % 2 != 0)
			{
				soma += x;
				j++;
			}
			x++;
		}
		printf("%d\n", soma);

		soma = 0;
	}
}
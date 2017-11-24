#include <stdio.h>

int main()
{
	int x, i, soma = 0;

	scanf("%d", &x);

	while(x != 0)
	{
		soma = 0;
		i = 0;

		while(i < 5)
		{
			if(x % 2 == 0)
			{
				soma += x;
				i++;
			}

			x++;
		}

		printf("%d\n", soma);

		scanf("%d", &x);
	}
}
#include <stdio.h>

int main()
{
	int a, i, soma = 0;

	for(i = 0; i < 4; i++)
	{
		scanf("%d", &a);
		soma += a;
	}

	printf("%d\n", soma - 3);
}
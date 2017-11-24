#include <stdio.h>

int main()
{
	int i, n[20], aux;

	for(i = 0; i <= 19; i++)
	{
		scanf("%d", &n[i]);
	}

	for(i = 0; i <= 9; i++)
	{
		aux = n[i];
		n[i] = n[19 - i];
		n[19 - i] = aux;
	}

	for(i = 0; i <= 19; i++)
	{
		printf("N[%d] = %d\n", i, n[i]);
	}
}
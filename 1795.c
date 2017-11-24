#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long long int saida = 1, i;
	int numero;

	scanf("%d", &numero);

	for(i = 0; i < numero; i++)
		saida *= 3;

	printf("%lld\n", (unsigned long long) saida);

	return 0;
}
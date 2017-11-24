#include <stdio.h>

int main()
{
	int a, b, tempo;

	scanf("%i %i", &a, &b);

	tempo = (24 - a) + b;

	if (tempo > 24)
	{
		tempo = (b - a);
	}

	printf("O JOGO DUROU %i HORA(S)\n", tempo);
}
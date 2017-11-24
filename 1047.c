#include <stdio.h>

int main()
{
	int ha, hb, ma, mb, horas, minutos;

	scanf("%i %i %i %i", &ha, &ma, &hb, &mb);

	horas = (24 - ha) + hb;

	if (horas > 24)
	{
		horas = (hb - ha);
	}

	minutos = 60 - ((60 - mb) + ma);

	if (minutos < 0)
	{
		minutos = 60 + (mb - ma);
	}

	if (mb < ma)
	{
		horas = horas - 1;
	}

	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas, minutos);
}
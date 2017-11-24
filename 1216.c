#include <stdio.h>

int main()
{
	char  amigo[254];
	double saida, soma = 0, distancia, indice = 0;

	while(fgets(amigo, 254, stdin))
	{
		scanf("%lf", &distancia);
		soma += distancia;
		indice++;
	}

	printf("%.1lf\n", soma / indice);
}
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, qtd, sapo = 0, coelho = 0, rato = 0, total = 0;
	float psapo, pcoelho, prato;
	char bicho;

	scanf("%d", &i);

	for (j = 0; j < i; j++)
	{
		scanf("%d %c", &qtd, &bicho);

		if (bicho == 'R')
		{
			rato = rato + qtd;
			total += qtd;
		}
		
		else if (bicho == 'C')
		{
			coelho = coelho + qtd;
			total += qtd;
		}

		else if (bicho == 'S')
		{
			sapo = sapo + qtd;
			total += qtd;
		}
	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);

	pcoelho = (100.0 * coelho) / total;
	psapo = (100.0 * sapo) / total;
	prato = (100.0 * rato) / total;

	printf("Percentual de coelhos: %.2f %%\n", pcoelho);
	printf("Percentual de ratos: %.2f %%\n", prato);
	printf("Percentual de sapos: %.2f %%\n", psapo);

	return 0;
}
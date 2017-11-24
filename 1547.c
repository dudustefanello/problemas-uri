#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nt, na, valor, ganhador, menor, i, j;

	scanf("%d", &nt);

	for(i = 0; i < nt; i++)
	{
		scanf("%d %d", &na, &valor);

		menor = 100;

		int alunos[na + 1], pontos[na + 1];

		for(j = 1; j <= na; j++)
			scanf("%d", &alunos[j]);

		for(j = 1; j <= na; j++)
		{
			if(alunos[j] == valor)
			{
				ganhador = j;
				break;
			}

			else
			{
				pontos[j] = abs(valor - alunos[j]);

				if(pontos[j] < menor)
				{
					menor = pontos[j];
					ganhador = j;
				}
			}
		}

		printf("%d\n", ganhador);
	}
}
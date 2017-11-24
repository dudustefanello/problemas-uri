#include <stdio.h>

int main()
{
	int condicao = 1, inter = 0, gremio = 0, empate = 0, grenal = 0, gg, gi;

	while(condicao == 1)
	{
		scanf("%d %d", &gi, &gg);

		if(gi > gg)
		{
			inter++;
		}
		else if(gi == gg)
		{
			empate++;
		}
		else if(gi < gg)
		{
			gremio++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &condicao);

		grenal++;
	}

	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);

	if(inter > gremio)
	{
		printf("Inter venceu mais\n");
	}
	else if(inter < gremio)
	{
		printf("Gremio venceu mais\n");
	}
}
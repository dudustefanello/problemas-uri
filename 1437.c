#include <stdio.h>

int main()
{
	int i, j, posicao = 0;

	scanf("%d", &i);

	while(i != 0)
	{
		posicao = 0;

		char comandos[i];

		scanf("%s", comandos);

		for(j = 0; j < i; j++)
		{
			if(comandos[j] == 'D')
				posicao++;

			else if(comandos[j] == 'E')
				posicao--;
		}

		if(posicao < 0 && posicao <= -4)
			while(posicao < -4)
				posicao += 4;

		else if(posicao > 0 && posicao >= 4)
			while(posicao > 4)
				posicao -= 4;

		if (posicao <= 0)
			switch(posicao)
			{
				case 0 : printf("N\n"); break;
				case -1: printf("O\n"); break;
				case -2: printf("S\n"); break;
				case -3: printf("L\n"); break;
			}

		if (posicao > 0)
			switch(posicao)
			{
				case 1: printf("L\n"); break;
				case 2: printf("S\n"); break;
				case 3: printf("O\n"); break;
			}

		scanf("%d", &i);
	}
}
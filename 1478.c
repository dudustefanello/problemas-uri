#include <stdio.h>

int main()
{
	int i, j, ordem, a, b, diferenca; 

	do
	{
		scanf("%d", &ordem);

		if(ordem == 0)
			break;

		int matriz[ordem][ordem];

		for(i = 0; i < ordem; i++)
		{
			for(j = 0; j < ordem; j++)
			{
				if(i == j)
					matriz[i][j] = 1;
				else if (i != j)
				{
					if(i > j)
						matriz[i][j] = i - j + 1;
					else if(i < j)
						matriz[i][j] = j - i + 1;
				}
			}
		}

		for(i = 0; i < ordem; i++)
		{
			for(j = 0; j < ordem; j++)
			{
				if(j != ordem - 1)
					printf("%3d ", matriz[i][j]);
				else
					printf("%3d", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	while(ordem != 0);
}
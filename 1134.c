#include <stdio.h>

int main()
{
	int diesel = 0, gasolina = 0, alcool = 0, entrada = 0;

	while(entrada != 4)
	{
		scanf("%d", &entrada);
		
		{
			if(entrada == 1)
			{
				alcool++;
			}
			else if(entrada == 2)
			{
				gasolina++;
			}
			else if(entrada == 3)
			{
				diesel++;
			}
		}
	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
}
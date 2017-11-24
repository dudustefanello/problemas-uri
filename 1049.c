#include <stdio.h>
#include <string.h>

int main()
{
	char leitura1[20], leitura2[20], leitura3[20];
	char c0[20] = "vertebrado", c1[20] = "invertebrado";
	char c2[20] = "ave", c3[20] = "mamifero", c4[20] = "inseto", c5[20] = "anelideo";
	char c6[20] = "carnivoro", c7[20] = "onivoro", c8[20] = "herbivoro", c9[20] = "hematofago";

	scanf("%s", leitura1);
	scanf("%s", leitura2);
	scanf("%s", leitura3);

	if (strcmp(leitura1, c0) == 0)
	{
		if (strcmp(leitura2, c2) == 0)
		{
			if (strcmp(leitura3, c6) == 0)
			{
				printf("aguia\n");
			}
			
			else if (strcmp(leitura3, c7) == 0)
			{
				printf("pomba\n");
			}
		}

		else if (strcmp(leitura2, c3) == 0)
		{
			if (strcmp(leitura3, c7) == 0)
			{
				printf("homem\n");
			}

			else if (strcmp(leitura3, c8) == 0)
			{
				printf("vaca\n");
			}

			return 0;
		}	
	}

	else if (strcmp(leitura1, c1) == 0)
	{
		if (strcmp(leitura2, c4) == 0)
		{
			if (strcmp(leitura3, c9) == 0)
			{
				printf("pulga\n");
			}
			
			else if (strcmp(leitura3, c8) == 0)
			{
				printf("lagarta\n");
			}
		}

		else if (strcmp(leitura2, c5) == 0)
		{
			if (strcmp(leitura3, c9) == 0)
			{
				printf("sanguessuga\n");
			}
			
			else if (strcmp(leitura3, c7) == 0)
			{
				printf("minhoca\n");
			}
		}	
	}
	return 0;
}
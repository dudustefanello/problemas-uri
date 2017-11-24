#include <stdio.h>

int main()
{
	int idade = 0, soma = 0;
	float media = 0, i = 0;

	for(i = 0; idade >= 0; i++)
	{
		scanf("%d", &idade);

		if(idade >= 0)
		{
			soma += idade;
		}
	}

	media = soma / (i - 1);

	printf("%.2f\n", media);
}
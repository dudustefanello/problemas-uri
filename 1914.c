#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, numero1, numero2;
	char escolha1[10], escolha2[10], nome1[101], nome2[101];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2);
		scanf("%d %d", &numero1, &numero2);

		if((numero1 + numero2) % 2 == 0 && strcmp(escolha1, "PAR") == 0)
			printf("%s\n", nome1);

		if((numero1 + numero2) % 2 == 0 && strcmp(escolha2, "PAR") == 0)
			printf("%s\n", nome2);

		if((numero1 + numero2) % 2 != 0 && strcmp(escolha1, "IMPAR") == 0)
			printf("%s\n", nome1);

		if((numero1 + numero2) % 2 != 0 && strcmp(escolha2, "IMPAR") == 0)
			printf("%s\n", nome2);
	}
}

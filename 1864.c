#include <stdio.h>

int main()
{
	char frase[50] = "LIFE IS NOT A PROBLEM TO BE SOLVED\0";
	int entrada, i;

	scanf("%d", &entrada);

	for(i = 0; i < entrada; i++)
		printf("%c", frase[i]);

	printf("\n");
}
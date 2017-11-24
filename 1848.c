#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int loteria[3], i = 0, valor = 0;
	char corvo[10];

	do
	{
		fgets(corvo, 10, stdin);

		valor += (corvo[0] == '*') ? 4: 0;
		valor += (corvo[1] == '*') ? 2: 0;
		valor += (corvo[2] == '*') ? 1: 0;

		if(corvo[0] == 'c'){
			printf("%d\n", valor);
			i++;
			valor = 0;
		}
	}
	while(i < 3);
}
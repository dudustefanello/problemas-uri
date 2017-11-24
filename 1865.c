#include <stdio.h>
#include <string.h>

int main()
{
	int n, i = 0, forca;
	char nome[50];

	scanf("%d", &n);

	while(i < n)
	{
		scanf("%s %d", nome, &forca);

		if(strcmp(nome, "Thor") == 0)
			printf("Y\n");
		else
			printf("N\n");

		i++;
	} 
}
#include <stdio.h>
#include <string.h>
int main()
{
	int n, i, j, a;
	char palavra[6];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		a = 0;

		scanf("%s", palavra);

		if(strlen(palavra) == 5)
			printf("3\n");
		else
		{
			if(palavra[0] == 'o')
				a++;
			if(palavra[1] == 'n')
				a++;
			if(palavra[2] == 'e')
				a++;
			if(a >= 2)
				printf("1\n");
			else
				printf("2\n");
		}
	}
}
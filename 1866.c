#include <stdio.h>

int main()
{
	int entrada, n, i;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &entrada);
		
		if(entrada % 2 == 0)
			printf("0\n");
		else
			printf("1\n");
	}
}
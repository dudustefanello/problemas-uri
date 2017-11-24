#include <stdio.h>

int main()
{
	int x, y, c = 1;

	scanf("%d %d", &x, &y);


	while (c == 1)
	{
		if (x > y)
		{
			printf("Decrescente\n");
		}

		if (y > x)
		{
			printf("Crescente\n");
		}

		if (x == y)
		{
			c = 2;
		}
	}	
}
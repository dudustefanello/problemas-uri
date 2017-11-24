#include <stdio.h>

int main()
{
	int a, i, res;

	scanf("%i", &a);

	for (i = 1; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			res = (i * i);
			printf("%i^2 = %i\n", i, res);
		}
	}
}
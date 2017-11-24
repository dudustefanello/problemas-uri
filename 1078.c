#include <stdio.h>

int main()
{
	int a, b, res;

	scanf("%i", &a);

	for (b = 1; b <= 10; b++)
	{
		res = b * a;
		printf("%i x %i = %i\n", b, a, res);
	}

	return 0;
}
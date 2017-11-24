#include <stdio.h>

int main()
{
	int n, d, i, j;
	float c;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%f", &c);

		for(d = 0; c > 1; d++)
		{
			c = c / 2;
		}

		printf("%d dias\n", d);
	}
}
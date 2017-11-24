#include <stdio.h>

int main()
{
	int t, i, q;
	float a, b;

	scanf("%d", &t);

	while(t != 0)
	{
		for(i = 1; i <= t; i++)
		{
			scanf("%d %f %f", &q, &a, &b);
		
			printf("Size #%d:\n", i);
			printf("Ice Cream Used: %.2f cm2\n", (((a + b) * 5) / 2) * q);
		}

		printf("\n");

		scanf("%d", &t);
	}
}
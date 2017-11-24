#include <stdio.h>
/*
r(x, y) = (3x)² + y².

b(x, y) = 2(x²) + (5y)².

c(x, y) = -100x + y³.
*/
int main()
{
	int i, n, x, y, r, b, c;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		x = 0; y = 0; r = 0; b = 0; c = 0;

		scanf("%d %d", &x, &y);

		r = (3 * x) * (3 * x) + (y * y);
		b = 2 * (x * x) + (5 * y) * (5 * y);
		c = -100 * x + y * y * y;

		if(r > b && r > c)
			printf("Rafael ganhou\n");

		else if(b > c && b > r)
			printf("Beto ganhou\n");

		else if(c > r && c > b)
			printf("Carlos ganhou\n");
	}
}
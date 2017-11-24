#include <stdio.h>

int main()
{
	int x, y = 0, i = 2;

	scanf("%d %d", &x, &y);

	while(y <= x)
	{
		scanf("%d", &y);
	}

	while(x < y)
	{
		x = x + (x + 1);
		i++;
	}

	printf("%d\n", i);
}
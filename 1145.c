#include <stdio.h>

int main()
{
	int x, y, c;

	scanf("%d %d", &x, &y);

	for (c = 1; c <= y; c++)
	{
		if (c == y)
		{
			printf("%d\n", c);
		}

		else if (c % x == 0)
		{
			printf("%d\n", c);
		}
		
		else
		{
			printf("%d ", c);
		}
	}
}
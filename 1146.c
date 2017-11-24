#include <stdio.h>

int main()
{
	int i = 1, c;

	while (i != 0)
	{
		scanf("%d", &i);

		for (c = 1; c <= i; c++)
		{
			if (c == i)
			{
				printf("%d\n", c);
			}
		
			else
			{
				printf("%d ", c);
			}
		}
	}
}
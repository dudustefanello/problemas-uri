#include <stdio.h>

int main()
{
	int i, x;

	scanf("%i", &x);

	for(i = x; i <= (x + 11); i++)
	{
		if ((i % 2) != 0)
		{
			printf("%i\n", i);
		}
	}
	return 0;
}
#include <stdio.h>

main()
{
	int i, c;

	scanf("%d", &i);

	for (c = 1; c <= i; c++)
	{
		printf("%d %d %d\n", 
			c, c * c, c * c * c);
	}
}
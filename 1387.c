#include <stdio.h>

main()
{
	int a, b, r;

	scanf("%i %i", &a, &b);
	
	while (a != 0 && b != 0)
	{
		r = a + b;
		printf("%i\n", r);
		scanf("%i %i", &a, &b);
	}
}
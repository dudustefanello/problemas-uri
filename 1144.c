#include <stdio.h>
#include <math.h>

main()
{
	int i, c;

	scanf("%d", &i);

	for (c = 1; c <= i; c++)
	{
		printf("%d %.0lf %.0lf\n", c, pow(c, 2), pow(c, 3));
		printf("%d %.0lf %.0lf\n", c, pow(c, 2) + 1, pow(c, 3) + 1);
	}
}
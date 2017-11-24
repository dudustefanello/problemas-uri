#include <stdio.h>

main()
{
	float i, j, n;

	for(i = 0; i <= 2.2; i += 0.2)
	{
		for(n = 1; n <= 3; n++)
		{
			j = n + i;

			if(i == 0 || i == 1 || (int) i == 2)
			{
				printf("I=%.0lf J=%.0lf\n", i, j);
			}
			else
			{
				printf("I=%.1lf J=%.1lf\n", i, j);
			}
		}
	}
}
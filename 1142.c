#include <stdio.h>

main()
{
	int i, c;

	scanf("%d", &i);

	for (c = 1; c <= i * 4; c++)
	{
		if (c % 4 == 0)
		{
			printf("PUM\n");
		}

		else
		{
			printf("%d ", c);
		}
	}
}
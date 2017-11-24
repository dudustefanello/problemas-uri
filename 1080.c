#include <stdio.h>

int main()
{
	int in, j, mai, pos;

	for (j = 1; j <= 100; j++)
	{
		scanf("%i", &in);
		
		if (in > mai)
		{
			mai = in;
			pos = j;
		}
	}

	printf("%i\n%i\n", mai, pos);

	return 0;
}
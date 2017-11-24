#include <stdio.h>

int main()
{
	float S = 0, i, j = 1;

	for(i = 1; i <= 39; i += 2)
	{

		S += i / j;

		j = j * 2;

		printf("%f %f %f\n", S, j, i);
	}

	printf("%.2f\n", S);
}
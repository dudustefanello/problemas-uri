#include <stdio.h>

int main()
{
	int i;
	float a[100];

	for(i = 0; i <= 99; i++)
	{
		scanf("%f", &a[i]);

		if(a[i] <= 10)
		{
			printf("A[%d] = %.1f\n", i, a[i]);
		}
	}
}
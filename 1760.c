#include <stdio.h>
#include <math.h>

int main()
{
	float area, l;

	while(scanf("%f", &l) != EOF)
	{
		printf("%.2f\n", ((2 * sqrt(3.0) * pow(l, 2)) / 5.0));
	}
}
#include <stdio.h>

int main()
{
	double qtd, a = 0, b = 1, c, i;

	scanf("%lf", &qtd);

	printf("%.0lf %.0lf ", a, b);

	for(i = 0; i <= qtd - 3; i++)
	{
		c = b + a;

		if(i < qtd - 3)
		{
			printf("%.0lf ", c);
		}
		else if(i == qtd - 3)
		{
			printf("%.0lf\n", c);
		}

		a = b;
		b = c;
	}
}
#include <stdio.h>

int nota()
{
	double c = 0, n, s, m, cond;

	while (c <= 1)
	{
		n = 0;

		scanf("%lf", &n);

		if (n < 0 || n > 10)
		{
			printf("nota invalida\n");
		}
		
		else
		{
			s += n;
			c++;
		}
	}

	m = s / 2;

	printf("media = %.2lf\n", m);
}

int main()
{
	double c = 0, n, s, m, cond, b = 1;

	nota();
	
	while (b == 1)
	{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%lf", &cond);

		if (cond == 1)
		{
			nota();
		}

		if (cond == 2)
		{
			b = 2;
		}

		else
		{
			b = 1;
		}
	}
}
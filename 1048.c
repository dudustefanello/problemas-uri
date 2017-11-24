/*
0 - 400 = 15%
400,01 - 800 = 12%
800,01 - 1200 = 10%
1200,01 - 2000 = 7%
+ 2000 = 4%
*/

#include <stdio.h>

int main()
{
	double salario1, salario2, reajuste, percentual;

	scanf("%lf", &salario1);

	if (salario1 >= 0 && salario1 <= 400)
	{
		percentual = 15;
	}

	if (salario1 > 400 && salario1 <= 800)
	{
		percentual = 12;
	}

	if (salario1 > 800 && salario1 <= 1200)
	{
		percentual = 10;
	}

	if (salario1 > 1200 && salario1 <= 2000)
	{
		percentual = 7;
	}

	if (salario1 > 2000)
	{
		percentual = 4;
	}

	salario2 = salario1 + salario1 * percentual / 100;
	reajuste = salario2 - salario1;

	printf("Novo salario: %.2f\n", salario2);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %.0f %%\n", percentual);
} 
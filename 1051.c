#include <stdio.h>
#include <math.h>

int main()
{
	double renda, impostofinal, imposto1, imposto2, imposto3;

	scanf("%lf", &renda);

	if (renda <= 2000)
	{
		printf("Isento\n");
	}

	if (renda > 2000 && renda <= 3000)
	{
		impostofinal = (renda - 2000) * 0.08;
		printf("R$ %.2f\n", impostofinal);
	}

	if (renda > 3000 && renda <= 4500)
	{
		imposto1 = 80;
		imposto2 = (renda - 3000) * 0.18;
		impostofinal = imposto1 + imposto2;
		printf("R$ %.2f\n", impostofinal);
	}

	if (renda > 4500)
	{
		imposto1 = 80;
		imposto2 = 270;
		imposto3 = (renda - 4500) * 0.28;
		impostofinal = (imposto1 + imposto2) + imposto3;
		printf("R$ %.2f\n", impostofinal);
	}

	return 0;
}
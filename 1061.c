#include <stdio.h>

int main()
{
	char strings[9];
	int dia1, hora1, minuto1, segundo1;
	int dia2, hora2, minuto2, segundo2;
	int dia3, hora3, minuto3, segundo3;

	scanf("%s %d", strings, &dia1);
	scanf("%d %s %d %s %d", &hora1, strings, &minuto1, strings, &segundo1);

	scanf("%s %d", strings, &dia2);
	scanf("%d %s %d %s %d", &hora2, strings, &minuto2, strings, &segundo2);

	//DIAS
	dia3 = dia2 - dia1;

	//HORAS
	if(hora2 < hora1)
	{
		dia3--;
		hora3 = (24 - hora1) + hora2;
	}
	else
	{
		hora3 = hora2 - hora1;
	}

	//MINUTOS
	if(minuto2 < minuto1)
	{
		hora3--;
		minuto3 = (60 - minuto1) + minuto2;
	}
	else
	{
		minuto3 = minuto2 - minuto1;
	}

	//SEGUNDOS
	if(segundo2 < segundo1)
	{
		minuto3--;
		segundo3 = (60 - segundo1) + segundo2;
	}
	else
	{
		segundo3 = segundo2 - segundo1;
	}

	printf("%d dia(s)\n", dia3);
	printf("%d hora(s)\n", hora3);
	printf("%d minuto(s)\n", minuto3);
	printf("%d segundo(s)\n", segundo3);
}
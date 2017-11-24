#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
int main() 
{ 
	int number, horas;
	double salary, vhora;
	
 	scanf("%i", &number);
 	scanf("%i", &horas);
 	scanf("%lf", &vhora);

 	salary = horas * vhora;

 	printf("NUMBER = %i\n", number);
 	printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
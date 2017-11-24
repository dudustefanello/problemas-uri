#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
int main() 
{ 
	char nome;
	double salario, vendas, total;
	
 	scanf("%s", &nome);
 	scanf("%lf", &salario);
 	scanf("%lf", &vendas);

 	total = salario + (vendas * 0.15);

 	printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
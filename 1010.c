#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
int main() 
{ 
	int codigo1, qtd1, codigo2, qtd2;
	double valor1, valor2, total;
	
 	scanf("%d %d %lf", &codigo1, &qtd1, &valor1);
 	scanf("%d %d %lf", &codigo2, &qtd2, &valor2);

 	total = valor1 * qtd1 + valor2 * qtd2;

 	printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
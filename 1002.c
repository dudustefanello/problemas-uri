#include <stdio.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
int main() 
{ 
	double area, raio, pi=3.14159;
	
 	scanf("%lf", &raio);
 	area = pi * (raio*raio);
 	printf("A=%.4f\n", area);

    return 0;
}
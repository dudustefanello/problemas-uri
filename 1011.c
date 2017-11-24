#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{ 
	double pi = 3.14159, volume, raio;

	scanf("%lf", &raio);
 	
 	volume = (4.0 / 3.0) * pi * (raio * raio * raio);

 	printf("VOLUME = %.3f\n", volume);

    return 0;
}
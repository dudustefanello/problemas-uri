#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    double tempo, velocidade, litros;
  
    scanf("%lf %lf", &tempo, &velocidade);
 
    litros = (velocidade * tempo) / 12;
 
    printf("%.3f\n", litros);
     
    return 0;
}
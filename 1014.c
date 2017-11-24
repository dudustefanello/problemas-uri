#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    int x;
    double y, consumo;
  
    scanf("%d", &x);
    scanf("%lf", &y);
 
    consumo = x / y;
 
    printf("%.3f km/l\n", consumo);
    return 0;
}
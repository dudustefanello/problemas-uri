#include <stdio.h>
#include <math.h>
#include <stdlib.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    int a, b, c, maiorAB;
  
    scanf("%d%d%d", &a, &b, &c);
 
    maiorAB = ((a + b + abs (a - b)) / 2);
 
    maiorAB = ((maiorAB + c + abs (maiorAB - c)) / 2);
 
    printf("%d eh o maior\n",maiorAB);
    return 0;
}
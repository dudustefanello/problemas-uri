#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main()
{
  int a, b;
   
  scanf("%i %i", &a, &b);
   
  if (a % b == 0 || b % a == 0)
  {      
    printf("Sao Multiplos\n");
  }
  else if (a % b != 0 || b % a != 0)
  {
    printf("Nao sao Multiplos\n");
  }
}
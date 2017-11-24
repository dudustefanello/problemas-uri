#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    int hora, minuto, segundo;
  
    scanf("%i", &segundo);
 
    hora = segundo / 3600;
        segundo = segundo - (3600 * hora);
    minuto = segundo / 60;
        segundo = segundo - (60 * minuto);
 
    printf("%i:%i:%i\n", hora, minuto, segundo);
     
    return 0;
}
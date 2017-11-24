#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    int cem, cinq, vin, dez, cinc, dois, um, valor, valfx;
  
    scanf("%i", &valor);
 
    valfx = valor;
 
    cem = valor / 100;
        valor = valor - (100 * cem);
    cinq = valor / 50;
        valor = valor - (50 * cinq);
    vin = valor / 20;
        valor = valor - (20 * vin);
    dez = valor / 10;
        valor = valor - (10 * dez);
    cinc = valor / 5;
        valor = valor - (5 * cinc);
    dois = valor / 2;
        valor = valor - (2 * dois);
    um = valor / 1;
        valor = valor - (1 * um);
 
    printf("%i\n", valfx);
    printf("%i nota(s) de R$ 100,00\n", cem);
    printf("%i nota(s) de R$ 50,00\n", cinq);
    printf("%i nota(s) de R$ 20,00\n", vin);
    printf("%i nota(s) de R$ 10,00\n", dez);
    printf("%i nota(s) de R$ 5,00\n", cinc);
    printf("%i nota(s) de R$ 2,00\n", dois);
    printf("%i nota(s) de R$ 1,00\n", um);
     
    return 0;
}
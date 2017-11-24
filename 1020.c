#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
	int dias, meses, anos;
 
    scanf("%i", &dias);

    anos = dias / 365;
        dias = dias - (365 * anos);
    meses = dias / 30;
        dias = dias - (30 * meses);

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
    
    return 0;
}
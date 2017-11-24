#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    int a, b, c, d, cont;
    
    scanf("%i %i %i %i", &a, &b, &c, &d);

    cont = 0;

    if (b > c)
    {
        cont = cont + 1;
    }

    if (d > a)
    {
        cont = cont + 1;
    }

    if ((c + d) > (a + b))
    {
        cont = cont + 1;
    }

    if (c >= 0)
    {
        cont = cont + 1;
    }

    if (d >= 0)
    {
        cont = cont + 1;
    }

    if (a % 2 == 0)
    {
        cont = cont + 1;
    }

    if (cont == 6)
    {
        printf("Valores aceitos\n");
    }

    if (cont != 6)
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
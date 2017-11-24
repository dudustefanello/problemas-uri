#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    double item, total;
    int qtd, escolha;

    scanf("%i %i", &escolha, &qtd);

    if(escolha == 1)
    {
        item = 4;
    }
    if(escolha == 2)
    {
        item = 4.5;
    }
    if(escolha == 3)
    {
        item = 5;
    }
    if(escolha == 4)
    {
        item = 2;
    }
    if(escolha == 5)
    {
        item = 1.5;
    }

    total = item * qtd;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
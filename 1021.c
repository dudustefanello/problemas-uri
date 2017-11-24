#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    double valor;
    int notas, moedas, notasfx;
    int n100, n50, n20, n10, n05, n02;
    int m1, m05, m025, m01, m005, m001;

    scanf("%lf", &valor);

    notas = (int)valor;
    notasfx = notas;

    printf("NOTAS:\n");

    n100 = notas / 100;
    notas = notas - n100 * 100;
    printf("%i nota(s) de R$ 100.00\n", n100);

    n50 = notas / 50;
    notas = notas - n50 * 50;
    printf("%i nota(s) de R$ 50.00\n", n50);

    n20 = notas / 20;
    notas = notas - n20 * 20;
    printf("%i nota(s) de R$ 20.00\n", n20);

    n10 = notas / 10;
    notas = notas - n10 * 10;
    printf("%i nota(s) de R$ 10.00\n", n10);

    n05 = notas / 5;
    notas = notas - n05 * 5;
    printf("%i nota(s) de R$ 5.00\n", n05);

    n02 = notas / 2;
    notas = notas - n02 * 2;
    printf("%i nota(s) de R$ 2.00\n", n02);

    printf("MOEDAS:\n");

    m1 = notas / 1;
    notas = notas - m1 * 2;
    printf("%i moeda(s) de R$ 1.00\n", m1);

    moedas = ((valor - notasfx) * 100);

    m05 = moedas / 50;
    moedas = moedas - m05 * 50;
    printf("%i moeda(s) de R$ 0.50\n", m05);

    m025 = moedas / 25;
    moedas = moedas - m025 * 25;
    printf("%i moeda(s) de R$ 0.25\n", m025);

    m01 = moedas / 10;
    moedas = moedas - m01 * 10;
    printf("%i moeda(s) de R$ 0.10\n", m01);

    m005 = moedas / 5;
    moedas = moedas - m005 * 5;
    printf("%i moeda(s) de R$ 0.05\n", m005);

    m001 = moedas / 1;
    moedas = moedas - m001 * 1;
    printf("%i moeda(s) de R$ 0.01\n", m001);

    return 0;
}
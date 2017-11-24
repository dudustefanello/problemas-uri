#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{
    float a, b, c;
    float delta, r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b, 2) + ( - 4 * a * c));
    r1 = (- b + sqrt(delta)) / (2 * a);
    r2 = (- b - sqrt(delta)) / (2 * a);

    if(delta < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

    return 0;
}
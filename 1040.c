#include <stdio.h>
#include <math.h>
    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{ 
    float n1, n2, n3, n4, ex, media, media2;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4 * 1.0) / 10;

    printf("Media: %.1f\n", media);

    if(media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    if(media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    if(media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &ex);
        printf("Nota do exame: %.1f\n", ex);

        media2 = (media + ex) / 2;

        if(media2 >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n"); 
        }

        printf("Media final: %.1f\n", media2);
    }

    return 0;
}
#include <stdio.h>
 
int main()
{
    double ent[6], soma = 0, media;
    int i, cont = 0;
 
    for(i = 1; i <= 6; i++)
    {
        scanf("%lf", &ent[i]);
 
        if (ent[i] >= 0)
        {
            cont = cont + 1;
            soma = soma + ent[i];
        }
    }
 
    media = soma / cont;
 
    printf("%i valores positivos\n", cont);
    printf("%.1lf\n", media);
 
    return 0;
}
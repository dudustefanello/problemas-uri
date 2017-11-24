#include <stdio.h>
 
int main()
{
    int t, i, j, pop1, pop2, limite;
    float cre1, cre2;
 
    scanf("%d", &limite);
 
    for(j = 0; j < limite; j++)
    {
        scanf("%d %d %f %f", &pop1, &pop2, &cre1, &cre2);
 
        for(i = 0; pop1 <= pop2; i++)
        {
            pop1 += pop1 * (cre1 / 100);
            pop2 += pop2 * (cre2 / 100);
 
            if(i > 100)
                break;
        }
         
        if(i > 100)
            printf("Mais de 1 seculo.\n");
 
        else
            printf("%d anos.\n", i);
    }
 
    return 0;
}
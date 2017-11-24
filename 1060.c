#include <stdio.h>
 
int main()
{
    double ent[6];
    int i, cont;
 
    cont = 0;
 
    for(i = 1; i <= 6; i++)
    {
        scanf("%lf", &ent[i]);
 
        if (ent[i] >= 0)
        {
            cont = cont + 1;
        }
    }
 
    printf("%i valores positivos\n", cont);
 
    return 0;
}
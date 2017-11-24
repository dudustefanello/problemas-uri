#include <stdio.h>
 
int main()
{
    int ent[5];
    int i, cont = 0;
 
    for(i = 1; i <= 5; i++)
    {
        scanf("%i", &ent[i]);
 
        if ((ent[i] % 2) == 0)
        {
            cont = cont + 1;
        }
    }
 
    printf("%i valores pares\n", cont);
     
    return 0;
}
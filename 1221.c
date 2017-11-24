#include <stdio.h>
 
int main()
{
    long long int entrada, soma, i, j, n;
 
    scanf("%lld", &n);
 
    for(i = 1; i <= n; i++)
    {
        soma = 0;
        scanf("%lld", &entrada);
 
        if(entrada % 2 == 0)
            soma = 10;
        else
            for(j = 1; j < (entrada / 2) + 2; j += 2)
            {
                if(entrada % j == 0)
                {
                    soma += j;
                }
            }
 
        if(soma >= 1)
            printf("Prime\n");
 
        else
            printf("Not Prime\n");
    }
}
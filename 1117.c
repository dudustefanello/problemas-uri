#include <stdio.h>
 
int main()
{
    double c = 0, n, s, m;
 
    while (c <= 1)
    {
        n = 0;
 
        scanf("%lf", &n);
 
        if (n < 0 || n > 10)
        {
            printf("nota invalida\n");
        }
         
        else
        {
            s += n;
            c++;
        }
    }
 
    m = s / 2;
 
    printf("media = %.2lf\n", m);
}
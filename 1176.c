#include  <stdio.h>
 
int main()
{
    long long int fib[61];
    int i, n, max, j;
 
    fib[0] = 0;
    fib[1] = 1;
 
    scanf("%d", &max);
 
    for(j = 0; j < max; j++)
    {
        scanf("%d", &n);
 
        for(i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
 
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
}
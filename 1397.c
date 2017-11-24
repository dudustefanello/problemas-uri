#include <stdio.h>
 
int main()
{
    int n = 1, i, p, q, a, b;
 
    scanf("%d", &n);
 
    while(n != 0)
    {
        p = 0;
        q = 0;
 
        a = 0;
        b = 0;
 
        for(i = 1; i <= n; i++)
        {
            scanf("%d %d", &p, &q);
 
            if(p > q)
                a++;
 
            else if(q > p)
                b++;
        }
 
        printf("%d %d\n", a, b);
 
        scanf("%d", &n);
    }
}
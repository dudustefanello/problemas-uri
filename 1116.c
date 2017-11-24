#include <stdio.h>
 
int main()
{
    int c = 0, x, y, n;
    double y2, r;
 
    scanf("%d", &n);
 
    while (c < n)
    {
        scanf("%d %d", &x, &y);
 
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            y2 = y;
            r = x / y2;
            printf("%.1lf\n", r);
        }
 
        c++;
    }
}
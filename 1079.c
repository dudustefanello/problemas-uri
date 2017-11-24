#include <stdio.h>
 
int main()
{
    int i, j;
    double a, b, c, res;
 
    scanf("%i", &i);
 
    for (j = 0; j < i; j++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        res = a * 0.2 + b * 0.3 + c * 0.5;
        printf("%.1lf\n", res);
    }
 
    return 0;
}
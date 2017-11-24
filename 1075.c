#include <stdio.h>
 
int main()
{
    int a, b;
 
    scanf("%i", &a);
 
    for (b = 1; b < 10000; b++)
    {
        if (b % a == 2)
        {
            printf("%i\n", b);
        }
    }
 
    return 0;
}
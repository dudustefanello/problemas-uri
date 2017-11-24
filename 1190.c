#include <stdio.h>
 
int main()
{
    double M[12][12], soma;
    char op;
    int i, j, qtd = 0;
 
    scanf("%c", &op);
 
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
 
            if(i + j > 11 && i < j)
            {
                soma += M[i][j];
                qtd++;
            }
        }
    }
 
    if(op == 'S')
        printf("%.1lf\n", soma);
 
    if(op == 'M')
        printf("%.1lf\n", soma / qtd);
}
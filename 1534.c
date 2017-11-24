#include <stdio.h>
 
int main()
{
    int tamanho;
    int b, i, j;
 
    while(scanf("%d", &tamanho) != EOF)
    {
        b = tamanho - 1;
        int matriz[b + 1][b + 1];
 
        for(i = 0; i <= b; i++)
        {
            for(j = 0; j <= b; j++)
            {
                if(i == j)
                    matriz[i][j] = 1;
                else
                    matriz[i][j] = 3;
 
                 
                if(i + j == b)
                {
                    matriz[i][j] = 2;
                }
            }
        }
 
        matriz[0][b] = 2;
 
        for(i = 0; i <= b; i++)
        {
            for(j = 0; j <= b; j++)
                printf("%d", matriz[i][j]);
            printf("\n");
        }
    }
}
#include <stdio.h>

int main(){
     int n, i, j, k, maior, maior2, spaces, spaces2;
     while(scanf("%d", &n), n != 0){
          int matriz [n][n];
         
          matriz[0][0] = 1;
          for(i = 0; i < n; i++){
               for(j = 0; j < n; j++){
                    if(i + j != 0){
                         if(j == 0)
                              matriz[i][j] = matriz[i - 1][j] * 2;
                         else 
                              matriz[i][j] = matriz[i][j - 1] * 2;
                    }
               }
          }


          for(i = 0; i < n; i++){
               for(j = 0; j < n; j++){
                    maior = matriz[n - 1][n - 1];
                    spaces = 0;
                    while(maior > 9){
                         spaces++;
                         maior /= 10;
                    }
                    maior2 = matriz[i][j];
                    spaces2 = 0;
                    while(maior2 > 9){
                         spaces2++;
                         maior2 /= 10;
                    }
                    if (j == 0) spaces2++;
                    for(k = 0; k <= spaces - spaces2; printf(" "), k++);
                    printf("%d", matriz[i][j]);
               }
               printf("\n");
          }
          printf("\n");
     }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1001

int main(){
     
     int  n, m, i, j, x = 0, y, continua;

     scanf("%d", &n);

     getchar();

     m = n;

     while(x = 0, m--){

          char lida[TAM], separadas[TAM][TAM], auxiliar[TAM];

          memset(lida, 0, TAM);
          for(j = 0; memset(separadas[j], 0, TAM), j < TAM; j++);

          fgets(lida, TAM, stdin);

          for(i = 0, y = 0; i <= TAM; i++, y++){

               if(lida[i] == ' '){
                    x++;
                    y = -1;
               }
               else if(lida[i] == '\0'){
                    x++;
                    y = -1;
                    break;
               }
               else{
                    separadas[x][y] = lida[i];
                    if(separadas[x][y] == '\n')
                         separadas[x][y] = '\0';
               }
          }

          do
          {
               continua = 0;

               for(j = 0; j < x - 1; j++){
                    if(strlen(separadas[j]) < strlen(separadas[j + 1])){
                         strcpy(auxiliar, separadas[j]);
                         strcpy(separadas[j], separadas[j + 1]);
                         strcpy(separadas[j + 1], auxiliar);
                         continua = j;
                    }
               }

               n--;
          }while(continua != 0);

          for(j = 0; j < x; j++){
               if(j == x - 1)
                    printf("%s", separadas[j]);
               else
                    printf("%s ", separadas[j]);
          }
          printf("\n");
     }
}
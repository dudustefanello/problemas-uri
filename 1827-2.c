#include <stdio.h>

int main(int argc, char const *argv[]) {
    int tamanho, i, j;
    while (scanf("%d", &tamanho) != EOF) {
        int menor = tamanho / 3;
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < tamanho; j++) {
                if(i + j == tamanho - 1 && i == j) printf("4");
                else if((i >= menor && j >= menor) && (i < tamanho - menor && j < tamanho - menor)) printf("1");
                else if(i == j) printf("2");
                else if(i + j == tamanho - 1) printf("3");
                else printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

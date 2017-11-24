#include <stdio.h>

int main (int argc, char const *argv[]) {
    int i, a, entrada, mod, saida[8];

    scanf("%d", &entrada);

    for (i = 0, a = 0; entrada > 0; i++) {
        mod = entrada % 16;
        entrada /= 16;
        saida[a] = mod;
        a++;
    }


    for (i = a - 1; i >= 0; i--) {
        if (saida[i] < 10) printf("%d", saida[i]);
        else
            switch (saida[i]) {
                case 10: printf("A"); break;
                case 11: printf("B"); break;
                case 12: printf("C"); break;
                case 13: printf("D"); break;
                case 14: printf("E"); break;
                case 15: printf("F"); break;
            }

    }
    printf("\n");

    return 0;
}

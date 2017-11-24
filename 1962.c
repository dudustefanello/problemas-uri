#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        long long ano;
        scanf("%Ld", &ano);

        ano = 2015 - ano;

        if(ano < 0){
            printf("%Ld A.C.\n", ano * (-1) +1);
        }
        else if(ano > 0){
            printf("%Ld D.C.\n", ano);
        }
        else if(ano == 0){
            printf("1 A.C\n");
        }

    }
    return 0;
}

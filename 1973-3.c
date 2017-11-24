#include <stdio.h>

typedef struct estrutura{
    int ovelha;
    int passou;
}estrutura;

int main(int argc, char const *argv[]) {
    int n, par = 0, passadas = 0;
    long long int soma = 0;
    scanf("%d", &n);
    estrutura estrela[n];

    int i;
    for (i = 0; i < n; i++){
        estrela[i].passou = 0;
        scanf("%d", &estrela[i].ovelha);
    }

    for (i = 0; i < n && i >= 0; i) {
        if (estrela[i].ovelha % 2 != 0) par = 0;
        else par = 1;
        if (estrela[i].ovelha > 0) estrela[i].ovelha--;
        if (estrela[i].passou == 0) estrela[i].passou = 1;
        if (par) i--;
        else i++;
    }

    for (i = 0; i < n; i++) {
        if (estrela[i].passou) passadas++;
        soma += estrela[i].ovelha;
    }

    printf("%d %Ld\n", passadas, soma);

    return 0;
}

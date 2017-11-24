#include <stdio.h>

main(){
    double item, total = 0;
    
    int qtd, escolha, i;

    scanf("%d", &i);

    while(i--){
        scanf("%i %i", &escolha, &qtd);

        switch (escolha){
            case 1001: total += 1.5 * qtd; break;
            case 1002: total += 2.5 * qtd; break;
            case 1003: total += 3.5 * qtd; break;
            case 1004: total += 4.5 * qtd; break;
            case 1005: total += 5.5 * qtd; break;
        }
    }

    printf("%.2lf\n", total);
 
    return 0;
}
#include <stdio.h>

int main(){
	int n, c, i, acima;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &c);

		acima = 0;

		double soma = 0, notas[c], media;

		for(i = 0; i < c; i++){
			scanf("%lf", &notas[i]);
			soma += notas[i];
		}

		media = soma / c;

		for(i = 0; i < c; i++)
			acima = notas[i] > media ? acima + 1 : acima;

		printf("%.3f%%\n", (double) (acima * 100) / c);
	}
}
#include <stdio.h>

int main(){
	int n, o, h, i, j;

	scanf("%d", &n);

	for(h = 1; h <= n; h++){
		scanf("%d", &o);

		int matrizA[o][o], matrizB[o][o], matrizC[o][o];

		for(i = 0; i < o; i++)
			for(j = 0; j < o; j++)
				scanf("%d", &matrizA[i][j]);

		printf("Quadrado da matriz #%d:\n", h + 3);

		for(i = 0; i < o; i++)
			for(j = 0; j < o; j++)
				matrizC[i][j] = matrizB[i][j] = matrizA[i][j] * matrizA[i][j];



		for(i = 0; i < o; i++)
			for(j = 0; j < o; j++){
				printf("%d", matrizB[i][j]);
				j == o - 1 ? printf("\n") : printf(" ");
			}
	}
}

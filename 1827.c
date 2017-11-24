#include <stdio.h>
int main(){
	int i, j, tamanho;
	while(scanf("%d", &tamanho) != EOF){
		int matriz[tamanho][tamanho];
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho; j++){
				matriz[i][j] = 0;
				int met2 = (tamanho +1) / 4;
				if(i == j)
					matriz[i][j] = 2;
				else if(i + j == tamanho - 1)
					matriz[i][j] = 3;
				if((i >= met2) && (i < tamanho - met2) && (j >= met2) && (j < tamanho - met2))
					matriz[i][j] = 1;
				if((i == j) && (i + j == tamanho - 1))
					matriz[i][j] = 4;
				printf("%d", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
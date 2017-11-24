#include <stdio.h>

int main(){
	int n, h, i, j, linhas;

	while(scanf("%d", &n) != EOF){

		linhas = n % 2 == 0 ? n / 2 : n / 2 + 1;

		for(h = 0; h < linhas; h++){
			for(i = n / 2; i > 0 + h; i--) printf(" ");
			for(i = 0; i < h + 1; i++) printf("*");
			for(i = 0; i < h; i++) printf("*");
			printf("\n");
		}
		for(i = n / 2; i > 0; i--) printf(" ");
		printf("*\n");
		for(i = n / 2; i > 0 + 1; i--) printf(" ");
		printf("***\n\n");
	}
}
#include <stdio.h>
#include <string.h>

int main(){
	char entrada[201], mais, copy;
	int i, maior, n, vetor[124], x;

	scanf("%d", &n);

	getchar();
	
	while(n--){

		maior = 0; mais = 0;

		fgets(entrada, 201, stdin);

		for(i = 0; i <= 123; vetor[i] = 0, i++);

		for(i = 0; i < strlen(entrada) - 1; i++){
			if(entrada[i] >= 65 && entrada[i] <= 90){
				entrada[i] += 32;
			}

			vetor[entrada[i]]++;
		}

		for(i = 97; i < 123; i++){
			if(vetor[i] > maior){
				maior = vetor[i];
				mais = i;
			}
		}

		printf("%c", mais);

		for(i = 97; i < 123; i++){
			if(vetor[i] == maior && i != (int) mais){
				printf("%c", i);
			}
		}

		printf("\n");
	}
}
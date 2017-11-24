#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i, j, guerreiros, an, a1, soma = 0;

	scanf("%d", &n);

	for(; i < n; i++){
		scanf("%d", &guerreiros);

		for(j = 1, soma = 0; soma < guerreiros; j++){
			soma += j;
		}

		j--;
		printf("%d\n", j);
	}
}
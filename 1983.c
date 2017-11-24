#include <stdio.h>

int main(){
	int matricula, maiormatricula = 0, n;
	float nota, maiornota = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d %f", &matricula, &nota);

		nota > maiornota ? maiornota = nota, maiormatricula = matricula : 0;
	}

	maiornota >= 8 ? printf("%d\n", maiormatricula) : printf("Minimum note not reached\n");
}
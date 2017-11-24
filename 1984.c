#include <stdio.h>
#include <string.h>

int main(){
	unsigned long long entrada, saida = 0;
	short i = 1;
	
	scanf("%llu", &entrada);

	while(entrada % 10 == 0){
		printf("%llu", entrada % 10);
		entrada /= 10;
	}


	while(i){
		if(entrada < 10){
			saida *= 10;
			saida += entrada % 10;
			i++;
			break;
		}
		else{
			saida *= 10;
			saida += entrada % 10;
			entrada /= 10;
		}
	}

	printf("%llu\n", saida);
}
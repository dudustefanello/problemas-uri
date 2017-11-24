#include <stdio.h>

int main(){
	int soma1 = 0, soma2 = 0, verificadores, digito1, digito2, i;
	long long int numero2, numero = 0, a, b, c;
	
	while(getchar(), scanf("%lld.%lld.%lld-%d", &a, &b, &c, &verificadores) != EOF){
		soma1 = soma2 = 0;

		numero += a;
		numero *= 1000;
		numero += b;
		numero *= 1000;
		numero += c;

		numero2 = numero * 10;

		for(i = 2; i <= 10; i++){
			soma1 += (numero % 10) * i;
			numero /= 10;
		}

		digito1 = soma1 % 11 < 2 ? 0 : 11 - (soma1 % 11);
		
		numero2 += digito1;

		for(i = 2; i <= 11; i++){
			soma2 += (numero2 % 10) * i;
			numero2 /= 10;
		}

		digito2 = soma2 % 11 < 2 ? 0 : 11 - (soma2 % 11);

		if(digito1 * 10 + digito2 == verificadores)
			printf("CPF valido\n");
		else{
			printf("CPF invalido\n");
		}
	}
}
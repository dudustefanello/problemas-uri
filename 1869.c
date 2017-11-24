#include <stdio.h>
#include <string.h>

#define BASE 32

int main(){
	int base32[50];
	unsigned long long int entradadecimal;
	unsigned long long int quociente;
	int j, c, i;

	while(scanf("%llu", &entradadecimal)){

		if(entradadecimal == 0){
			printf("0");
		}

		quociente = entradadecimal;

		for (j = 0; quociente > 0; j++){
			base32[j] = quociente % BASE;
			
			quociente /= BASE;
		}

		for (i = (j-1); i >= 0; i--){
			if(base32[i] >= 0 && base32[i] <= 9)
				printf("%d", base32[i]);
			else if(base32[i] > 9)
				printf("%c", base32[i] + 55);
		}

		printf("\n");

		if(entradadecimal == 0) break;
	}

	return 0;
}
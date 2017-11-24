#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, j;
	char texto[55];

	while(fgets(texto, 51, stdin)){
		for(i = 0, j = 1; i < strlen(texto) - 1; i++){

			if(texto[i] != 32)
				j++;

			if(j % 2 == 0 && (texto[i] <= 122 && texto[i] >= 97))
				texto[i] -= 32;

			if(j % 2 != 0 && (texto[i] <= 90 && texto[i] >= 65))
				texto[i] += 32;
		}

		printf("%s", texto);
	}
}
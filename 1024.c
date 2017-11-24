#include <stdio.h>
#include <string.h>

int main(){
	char entrada[1001], invertida[1001];
	int n, i;

	scanf("%d", &n);

	getchar();
	
	while(n--){

		fgets(entrada, 1001, stdin);

		entrada[strlen(entrada) - 1] = 0;

		// 1ª
		for(i = 0; i < strlen(entrada); i++){
			entrada[i] = ((entrada[i] > 64 && entrada[i] < 91)
					   || (entrada[i] > 96 && entrada[i] < 123)) ? entrada[i] += 3 : entrada[i];
		}

		// 2ª
		for(i = 0; i <= strlen(entrada); i++){
			invertida[i] = entrada[strlen(entrada) - 1 - i];
		}

		// 3ª
		for(i = strlen(entrada) / 2; i < strlen(entrada); invertida[i]--, i++);
		
		printf("%s\n", invertida);
	}		
}
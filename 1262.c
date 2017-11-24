#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char entrada[51];
	int n, i, j, ciclo;

	while(scanf("%s %d", entrada, &n) != EOF){
		
		ciclo = 0;

		for(i = 0; i <= strlen(entrada); i++){
			
			if(entrada[i] == 'W'){
				ciclo++;
			}
			
			else if(entrada[i] == 'R'){
				for(j = 0;; ++j, i++)
					if(entrada[i] != 'R'){
						i--;
						break;
					}
				for(; j > 0; j -= n, ciclo++);
			}
		}

		printf("%d\n", ciclo);
	}
}
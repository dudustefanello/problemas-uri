#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j, cont;
	char a1[1005], a2[1005], b1[1005], b2[1005];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s %s", a1, b1);

		int sb1 = strlen( b1) - 1, sa1 = strlen( a1) - 1;

		if(sa1 >= sb1){
			for(j = (sa1 - 1); j >= 0; j--){
				a2[sa1 - 1 - j] = a1[j];
			} a2[sa1] = 0;

			for(j = (sb1 - 1); j >= 0; j--){
				b2[sb1 - 1 - j] = b1[j];
			} b2[sb1] = 0;

			cont = 0;

			for(j = 0; b2[j] != 0; j++){
				if(a2[j] != b2[j]){
					cont = 1;
					break;
				}
			}

			if(!j)
				printf("nao encaixa\n");
			else
				printf("encaixa\n");
		}
		else printf("nao encaixa\n");
	}
}
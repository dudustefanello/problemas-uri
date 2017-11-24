#include <stdio.h>

int main(){
	long long int n, i, soma1 = 0, soma2 = 0;

	scanf("%lld", &n);

	long long int estrela[n], contagem[n];

	for(i = 0; i < n; scanf("%lld", &estrela[i]), contagem[i] = 0, i++);

	for(i = 0; i < n; i++){
		
		contagem[i] += contagem[i] == 0 ? 1 : 0;

		if(estrela[i] % 2 == 1 && estrela[i] != 0){
			estrela[i]--;
		}
		else if(estrela[i] % 2 == 0 && estrela[i] != 0){
			estrela[i]--;
			i -= 2;
			if(i < 0)
				break;
		}
		else if(estrela[i] == 0){
			i -= 2;
			if(i < 0)
				break;
		}
	}

	for(i = 0; i < n; soma1 += contagem[i], soma2 += estrela[i], i++);
		
	printf("%lld %lld\n", soma1, soma2);

	return 0;
}
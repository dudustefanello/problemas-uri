#include <stdio.h>

int mdc(int a, int b){
	if(b == 0) return a;
	return mdc(b, a % b);
}

int mdc2(int a, int b){
	int aux;;
	while(b){
		aux = b;
		b = a % b;
		a = aux;
	}

	return a;
}

int main(){
	int n, f1, f2;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &f1, &f2);
		printf("%d\n", mdc(f1, f2));
	}

	return 0;
}
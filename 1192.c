#include <stdio.h>

int main(){
	int a, b, n, i;
	char c;

	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %c %d", &a, &c, &b);

		if(a == b)
			printf("%d\n", a * b);

		else if(c <= 122 && c >= 97)
			printf("%d\n", a + b);

		else if(c <= 90 && c >= 65)
			printf("%d\n", b - a);
	}
}
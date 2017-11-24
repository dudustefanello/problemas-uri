#include <stdio.h>
#include <math.h>

int main(){
	int i, n, c, d;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d %d", &c, &d);

		if(c == 0 && d == 0)
			printf("0\n");
		else
			printf("%d\n", (int) (pow(26, c)  * pow(10, d)));
	}
}
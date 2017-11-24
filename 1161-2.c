// 1161
#include <stdio.h>

typedef unsigned long long ull; // definir tipo novo "ull"

ull fat(int n){
	if(n == 0 || n == 0) return 1;
	return n * fat(n - 1);
}

int main(void){
	int m, n;

	while(scanf("%d %d", &m, &n) != EOF)
		printf("%llu\n", fat (m) + fat(n));
}
#include <stdio.h>

int main(){
	long long int x, y, i, fat1, fat2;

	while(scanf("%lld %lld", &x, &y) != EOF){

		x = x == 0 ? 1 : x;

		y = y == 0 ? 1 : y;
		
		fat1 = x;
		fat2 = y;

		for(i = x - 1; i >= 2; i--)
			fat1 = fat1 * i;

		for(i = y - 1; i >= 2; i--)
			fat2 = fat2 * i;

		printf("%lld\n", fat1 + fat2);
	}
}
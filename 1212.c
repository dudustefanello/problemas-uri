#include <stdio.h>

int main()
{
	int a, b, carry;
	while(1){
		getchar();
		getchar();
		scanf("%d %d", &a, &b);
		if(!a && !b) break;
		carry = 0;
		while(a > 1 || b > 1){
			printf("%d %d\n", a, b);
			if((a % 10) + (b % 10) >= 10){
				carry++;
				a /= 10;
				b /= 10;
				b++;
			}
			else{
				a /= 10;
				b /= 10;
			}
		}
		switch(carry){
			case 0: printf("No carry operation.\n"); break;
			case 1: printf("1 carry operation.\n"); break;
			default: printf("%d carry operations.\n", carry); break;
		}
	}
}

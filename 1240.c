#include <stdio.h>

int main()
{
	long long int a, b;
	int n, i, j;

	scanf("%d", &n);

	for(j = 0; j < n; j++)
	{
		scanf("%lld %lld", &a, &b);

		if(b > a)
			printf("nao encaixa\n");
		else if(b == a)
			printf("encaixa\n");
		else
		{
			for(i = 10; b % i < b; i *= 10);

			if(a % i == b % i)
				printf("encaixa\n");
			else 
				printf("nao encaixa\n");
		}
	}	
}
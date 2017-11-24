#include <stdio.h>

int main()
{
	int n;

	while(scanf("%d", &n), n != 0)
	{
		int soma = 1;

		for(n; n > 1; soma += n * n, n--);
		
		printf("%d\n", soma);
	}
}
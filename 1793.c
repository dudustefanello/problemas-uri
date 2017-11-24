#include <stdio.h>

int main()
{
	int i, n, soma;	

	scanf("%d", &n);

	while(n != 0)
	{
		if(n == 0)
			break;

		soma = 10;

		int t[n];

		for(i = 0; i < n; i++)
			scanf("%d", &t[i]);
		
		for(i = 0; i < n - 1; i++)
		{
			if((t[i + 1] - t[i]) <= 10)
				soma = soma + (t[i + 1] - t[i]);
			else if((t[i + 1] - t[i]) > 10)
				soma += 10;
		}

		printf("%d\n", soma);

		scanf("%d", &n);
	}
}
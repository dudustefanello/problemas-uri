#include <stdio.h>

int main()
{
	int j, i, n, casa;
	long long unsigned int soma;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		soma = 1;

		scanf("%d", &casa);

		if(casa == 64)
		{
			printf("1537228672809129 kg\n");
			return 0;
		}

		for(j = 0; j < casa; j++)
		{
			soma *= 2;
		}

		printf("%lld kg\n", (soma / 12) / 1000);
	}
}
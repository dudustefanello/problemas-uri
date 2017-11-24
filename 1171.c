#include <stdio.h>

int main()
{
	int n, i, j, k;

	scanf("%d", &n);

	int vetor[n], frequecia[n], numero[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d", &vetor[i]);
		frequecia[i] = 0;
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; )
	}

	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(vetor[i] == vetor[j])
				frequecia[i]++;
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("num %d   freq %d\n", vetor[i], frequecia[i]);
	}
}
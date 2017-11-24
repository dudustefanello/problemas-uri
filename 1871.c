#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long long int m, n, a;
	int i;
	char e[11];

	while(1)
	{
		scanf("%lld %lld", &m, &n);

		if(m == 0 && n == 0)
			return 0;

		a = m + n;

		sprintf(e, "%lld", a);

		for(i = 0; i < strlen(e); i++)
		{
			if(e[i] != '0')
				printf("%c", e[i]);
		}
		printf("\n");
	}
}
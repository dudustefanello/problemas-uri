#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0, b, i, j, n;
	char amostra[1001];

	scanf("%d", &n);

	for(j = 0; j < n; j++)
	{
		a = b = 0;

		scanf("%s", amostra);

		for(i = 0; i < strlen(amostra); i++)
		{
			if(i > 0 && amostra[i] == '>')
				a++;
			else if(i < strlen(amostra) - 1 && amostra[i] == '<')
				b++;
		}

		if(a >= b)
			printf("%d\n", b);
		else
			printf("%d\n", a);
	}
}

>>>>>><<<<<
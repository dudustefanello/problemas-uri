#include <stdio.h>

int main()
{
	int n[1000], i, k = 0, t;

	scanf("%d", &t);

	for(i = 0; i < 1000; i++)
	{
		n[i] = k;
		
		printf("N[%d] = %d\n", i, n[i]);

		k++;

		if(k == t)
			k = 0;
	}
}
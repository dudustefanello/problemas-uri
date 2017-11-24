#include <stdio.h>

int main()
{
	int q, i, o, y = 0, n = 0;

	scanf("%d", &q);

	for(i = 0; i < q; i++)
	{
		scanf("%d", &o);

		if(o == 1)
			n++;

		else if(o == 0)
			y++;
	}

	if(n >= y)
		printf("N\n");

	else
		printf("Y\n");
}
#include <stdio.h>

int main()
{
	int a[5], b[5], i, y = 0;

	for(i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	for(i = 0; i < 5; i++)
	{
		if(a[i] != b[i])
			y++;
	}

	if(y == 5)
		printf("Y\n");
	else
		printf("N\n");
}
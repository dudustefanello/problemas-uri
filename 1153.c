#include <stdio.h>

int main()
{
	int x, i, fat;

	scanf("%d", &x);

	fat = x;

	for(i = x - 1; i >= 2; i--)
	{
		fat = fat * i;
	}

	printf("%d\n", fat);
}
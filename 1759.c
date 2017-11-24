#include <stdio.h>

int main()
{
	int n, i;
	char h[3] = "Ho";

	scanf("%d", &n);

	for(i = 1; i < n; i++)
		printf("%s ", h);

	printf("%s!\n", h);
}
#include <stdio.h>

int main()
{
	int reclama;

	while(scanf("%d", &reclama) != EOF)
	{
		if(reclama == 0)
			printf("vai ter copa!\n");

		else
			printf("vai ter duas!\n");
	}
}
#include <stdio.h>

int main()
{
	int i, j, vel, mais;

	while(scanf("%d", &i) != EOF)
	{
		mais = 0;

		for(j = 1; j <= i; j++)
		{
			scanf("%d", &vel);

			if(vel > mais)
				mais = vel;
		}

		if(mais < 10)
			printf("1\n");

		else if(mais >= 10 && mais < 20)
			printf("2\n");

		else if(mais >= 20)
			printf("3\n");
	}
}
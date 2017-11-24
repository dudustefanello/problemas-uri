#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, c1, c2, hp, i, mdc;

	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		mdc = 0;

		if(a >= b && a >= c)
		{
			hp = a;
			c1 = b;
			c2 = c;
		}

		else if(b >= c && b >= a)
		{
			hp = b;
			c1 = a;
			c2 = c;
		}

		else if(c >= a && c >= b)
		{
			hp = c;
			c1 = a;
			c2 = b;
		}

		printf("tripla");

		if(hp * hp == c1 * c1 + c2 * c2)
		{
			printf(" pitagorica");

			for(i = 1; i <= hp; i++)
			{
				if(hp % i == 0 && c1 % i == 0 && c2 % i == 0)
					mdc = i;
			}

			if(mdc == 1)
				printf(" primitiva");
		}

		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main()
{
	int n = 1, i, m, jo, ma;

	scanf("%d", &n);

	while(n != 0)
	{
		jo = 0; ma = 0;

		for(i = 1; i <= n; i++)
		{
			scanf("%d", &m);

			if(m == 1)
				jo++;

			else
				ma++;
		}

		printf("Mary won %d times and John won %d times\n", ma, jo);

		scanf("%d", &n);
	}
}
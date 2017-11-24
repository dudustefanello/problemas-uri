#include <stdio.h>

int main()
{
	int m, n, i, j, x, s;

	scanf("%d %d", &m, &n);

	for (i = 0; m > 0 && n > 0; i++)
	{
		s = 0;

		if (m > n)
		{
			x = m;
			m = n;
			n = x;
		}

		for (j = m; j <= n; j++)
		{
			s += j;
			printf("%d ", j);
		}

		printf("Sum=%d\n", s);

		scanf("%d %d", &m, &n);
	}

	return 0;
}
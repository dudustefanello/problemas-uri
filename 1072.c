#include <stdio.h>

int main()
{
	int n, i = 0, in = 0, out = 0;

	scanf("%i", &n);

	int x[n];

	for (n; i < n; i++)
	{
		scanf("%i", &x[i]);

		if (x[i] >= 10 && x[i] <= 20)
		{
			in = in + 1;
		}

		else
		{
			out = out + 1;
		}
	}

	printf("%i in\n", in);
	printf("%i out\n", out);
}
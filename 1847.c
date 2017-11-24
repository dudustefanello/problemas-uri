#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if(a > b && b <= c)
	{
		printf(":)\n");
		return 0;
	}
	else if(a < b && b >= c)
	{
		printf(":(\n");
		return 0;
	}
	else if(a == b && b < c)
	{
		printf(":)\n");
		return 0;
	}
	else if(a == b && b > c)
	{
		printf(":(\n");
		return 0;
	}

	else if(a < b && b < c)
	{
		if(b - a > c - b)
		{
			printf(":(\n");
			return 0;
		}
		else if(b - a <= c - b)
		{
			printf(":)\n");
			return 0;
		}
	}
	else
	{
		if(a - b <= b - c)
		{
			printf(":(\n");
			return 0;
		}
		else
		{
			printf(":)\n");
			return 0;
		}
	}
}
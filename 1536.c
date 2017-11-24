#include <stdio.h>

int main()
{
	int i, n, t1, t2, s1, s2, v1, v2, sa1, sa2;
	char x;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		v1 = 0;
		v2 = 0;

		s1 = 0;
		s2 = 0;

		scanf("%d %c %d", &t1, &x, &t2);
		s1 += t1;
		s2 += t2;
		sa2 = t2;

		if(t1 < t2)
			v2 = 3;

		else if(t1 > t2)
			v1 = 3;

		else if(t1 == t2)
		{
			v1 = 1;
			v2 = 1;
		}

		scanf("%d %c %d", &t2, &x, &t1);
		s1 += t1;
		s2 += t2;
		sa1 = t1;

		if(t1 < t2)
			v2 = 3;

		else if(t1 > t2)
			v1 = 3;

		else if(t1 == t2)
		{
			v1 = 1;
			v2 = 1;
		}

		if(v1 < v2)
			printf("Time 2\n");

		else if(v1 > v2)
			printf("Time 1\n");

		else if(v1 == v2)
		{
			if(s1 < s2)
				printf("Time 2\n");

			else if(s1 > s2)
				printf("Time 1\n");

			else if(s1 == s2)
			{
				if(sa1 < sa2)
					printf("Time 2\n");

				else if(sa1 > sa2)
					printf("Time 1\n");	

				else
					printf("Penaltis\n");
			}
		}
	}
}
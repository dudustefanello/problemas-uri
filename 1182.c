#include <stdio.h>

int main()
{
	float m[12][12], soma;
	int c, i, j;
	char t;

	scanf("%d %c", &c, &t);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			scanf("%f", &m[i][j]);

			if(j == c)
				soma += m[i][j];
		}
	}

	if(t == 'S')
		printf("%.1f\n", soma);

	else if(t == 'M')
		printf("%.1f\n", soma / 12);

	return 0;
}
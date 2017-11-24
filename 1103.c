#include <stdio.h>

int main()
{
	int h1, h2, h3, m1, m2, m3, final;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	while(m1 != 0 || m2 != 0 || h1 != 0 || h2 != 0)
	{
		if(h1 > h2)
			h3 = (24 - h1) + h2;
		else if(h1 == h2 && m1 > m2)
			h3 = (24 - h1) + h2;
		else if(h1 < h2)
			h3 = h2 - h1;

		if(m1 > m2)
		{
			h3--;
			m3 = (60 - m1) + m2;
		}
		else
			m3 = m2 - m1;

		final = (h3 * 60) + m3;

		printf("%d\n", final);

		final = 0;
		h3 = 0;
		m3 = 0;

		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	}
} 
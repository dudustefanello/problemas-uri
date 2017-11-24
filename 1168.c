#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, i, j, leds;
	char entrada[1000];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		leds = 0;

		scanf("%s", entrada);

		for(j = 0; j < strlen(entrada); j++)
		{
			switch(entrada[j])
			{
				case '1': leds += 2; break;
				case '2': leds += 5; break;
				case '3': leds += 5; break;
				case '4': leds += 4; break;
				case '5': leds += 5; break;
				case '6': leds += 6; break;
				case '7': leds += 3; break;
				case '8': leds += 7; break;
				case '9': leds += 6; break;
				case '0': leds += 6; break;
			}
		}

		printf("%d leds\n", leds);
	}

	return 0;
}
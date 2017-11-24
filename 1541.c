#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d, i;

	INICIO:
	scanf("%d", &a);

	if(a == 0)
		return 0;

	scanf("%d %d", &b, &c);

	if(c == 100)
		d = sqrt(a * b);

	if(c != 100)
		d = sqrt((a * b * 100) / c);

	printf("%d\n", d);
	
	goto INICIO;
}
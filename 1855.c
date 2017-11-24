#include <stdio.h>

int main(){
	int i, j;
	int x, y;

	scanf("%d %d", &x, &y);

	char mapa[y][x + 1];

	for(i = 0; i < y; i++)
		scanf("%s", mapa[i]);

	if(mapa[0][0] == '>')
		for(j = 1; j < x && mapa[0][j] == '.'; j++)
			mapa[0][j] = 'x';

	for(i = 0; i < y; i++)
		printf("%s\n", mapa[i]);

}
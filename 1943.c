#include <stdio.h>

int main(){
	int i;
	scanf("%d", &i);

	if(i == 1) printf("Top 1\n");
	else if(i > 1 && i <= 3) printf("Top 3\n");
	else if(i > 3 && i <= 5) printf("Top 5\n");
	else if(i > 5 && i <= 10) printf("Top 10\n");
	else if(i > 10 && i <= 25) printf("Top 25\n");
	else if(i > 25 && i <= 50) printf("Top 50\n");
	else if(i > 50 && i <= 100) printf("Top 100\n");

	return 0;
}
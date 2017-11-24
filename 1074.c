#include <stdio.h>

int main(){
	int testes, numero;
	scanf("%d", &testes);
	while(testes--){
		scanf("%d", &numero);
		if(!(1 & nnumero) && !(1 << 32) & numero)) printf("NULL\n");
		else if(1 & numero){
			printf("ODD ");
			if((1 << 32) & numero) printf("NEGATIVE");
			else printf("POSITIVE");
		}
		else{
			printf("EVEN");
			if
		}
	}
}
int main()
{
	int n, x, i;

	scanf("%i", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%i", &x);

		if (x == 0)
		{
			printf("NULL\n");
		}

		else 
		{
			if (x % 2 == 0 && x < 0)
			{
				printf("EVEN NEGATIVE\n");
			}

			if (x % 2 == 0 && x > 0)
			{
				printf("EVEN POSITIVE\n");
			}

			if (x % 2 != 0 && x < 0)
			{
				printf("ODD NEGATIVE\n");
			}

			if (x % 2 != 0 && x > 0)
			{
				printf("ODD POSITIVE\n");
			}
		}			
	}

	return 0;
}
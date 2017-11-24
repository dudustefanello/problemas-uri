#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	queue<int> cartas;
	int n, i;

	while(scanf("%d", &n), n)
	{
		for(i = 1; i <= n; i++)
		{
			cartas.push(i);
		}

		printf("Discarded cards: ");

		while(cartas.size() >= 2)
		{
			printf("%d", cartas.front());
			cartas.pop();

			cartas.push(cartas.front());
			cartas.pop();

			if(cartas.size() > 1)
				printf(", ");
			else
				printf("\n");
		}

		printf("Remaining card: %d\n", cartas.front());
		cartas.pop();
	}
}
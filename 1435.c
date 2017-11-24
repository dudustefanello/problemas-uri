#include <stdio.h>

main()
{
	int lado = 1, i, j, k, c = 0;

	while(lado != 0)
	{
		scanf("%d", &lado);

		if(lado == 0)
		{
			return 0;
		}

		int matriz[lado][lado];

		for(i = 0; i < lado; i++)
		{
			for(j = 0; j < lado; j++)
			{
				matriz[i][j] = 0;
			}
		}

		for(k = 0; k <= lado / 2; k++)
		{
			for(i = k; i < lado - k; i++)
			{
				for(j = k; j < lado - k; j++)
				{
					matriz[i][j]++;
				}
			}
		}

         	for(i = 0; i < lado; i++)
         	{
                 	for(j = 0; j < lado; j++)
                 	{
                 		if(j == lado - 1)
                 		{
                 			printf("%3d", matriz[i][j]);
                 		}

               		else
               		{
               			printf("%3d ", matriz[i][j]);
               		}
                 	}

            	printf("\n");
         	}

         	printf("\n");	
	}
}
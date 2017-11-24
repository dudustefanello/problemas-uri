#include <stdio.h>
 
int main()
{
    int ent, par[5], impar[5], p = 0, i = 0, j, k;
 
    for(j = 0; j < 15; j++)
   	{
        scanf("%d", &ent);

        if(ent % 2 == 0)
        {
        	par[p] = ent;
        	p++;

        	if(p == 5)
        	{
        		for(k = 0; k < p; k++)
        		{
        			printf("par[%d] = %d\n", k, par[k]);
        		}

        		p = 0;
        	}
        }

        else if(ent % 2 != 0)
        {
        	impar[i] = ent;
        	i++;

        	if(i == 5)
        	{
        		for(k = 0; k < i; k++)
        		{
        			printf("impar[%d] = %d\n", k, impar[k]);
        		}

        		i = 0;
        	}
        }
   	}

   	if(i < 5)
    {
    	for(k = 0; k < i; k++)
    	{
    		printf("impar[%d] = %d\n", k, impar[k]);
    	}

   		i = 0;
   	}

   	if(p < 5)
    {
    	for(k = 0; k < p; k++)
    	{
    		printf("par[%d] = %d\n", k, par[k]);
    	}

   		p = 0;
   	}
}
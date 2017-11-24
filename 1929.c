#include  <stdio.h>

int main()
{
	int i, j, tamanho[4], aux, menor;

	for(i = 0; i < 4; i++)
		scanf("%d", &tamanho[i]);

	for(i = 0; i < (4 - 1); i++)
   	{
   		menor = i;

   		for(j = (i + 1); j < 4; j++)
   		{
   	  		if(tamanho[j] < tamanho[menor])
   			{
      	  		menor = j;
   	    	}
	    }

 	    if(i != menor)
 	   	{
       		aux = tamanho[i];
       		tamanho[i] = tamanho[menor];
       		tamanho[menor] = aux;
    	}
    }
	
	if(tamanho[3] < tamanho[2] + tamanho[1] || tamanho[2] < tamanho[1] + tamanho[0])
		printf("S\n");
	else
		printf("N\n");

	//for(i = 0; i < 4; i++)
	//	printf("%d _ %d\n", i, tamanho[i]);
}
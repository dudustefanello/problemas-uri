#include <stdio.h>
#include <string.h>

int main(){
	char pais[20];

	getchar();

	while(fgets(pais, 20, stdin)){
		if(strcmp("alemanha\n", pais) == 0) printf("Frohliche Weihnachten!\n");

		else if(strcmp("austria\n", pais) == 0) printf("Frohe Weihnacht!\n");
		
		else if(strcmp("coreia\n", pais) == 0) printf("Chuk Sung Tan!\n");
		
		else if(strcmp("espanha\n", pais) == 0 ||
				strcmp("argentina\n", pais) == 0 ||
				strcmp("chile\n", pais) == 0 || 
				strcmp("mexico\n", pais) == 0) printf("Feliz Navidad!\n");
		
		else if(strcmp("grecia\n", pais) == 0) printf("Kala Christougena!\n");
		
		else if(strcmp("estados-unidos\n", pais) == 0 || 
				strcmp("inglaterra\n", pais) == 0 || 
				strcmp("antardida\n", pais) == 0 || 
				strcmp("canada\n", pais) == 0 || 
				strcmp("australia\n", pais) == 0) printf("Merry Christmas!\n");
		
		else if(strcmp("irlanda\n", pais) == 0) printf("Nollaig Shona Dhuit!\n");
		
		else if(strcmp("suecia\n", pais) == 0) printf("God Jul!\n");
		
		else if(strcmp("turquia\n", pais) == 0) printf("Mutlu Noeller\n");
		
		else if(strcmp("belgica\n", pais) == 0) printf("Zalig Kerstfeest!\n");
		
		else if(strcmp("italia\n", pais) == 0 ||
				strcmp("libia\n", pais) == 0) printf("Buon Natale!\n");
		
		else if(strcmp("siria\n", pais) == 0 ||
				strcmp("marrocos\n", pais) == 0) printf("Milad Mubarak!\n");

		else if(strcmp("japao\n", pais) == 0) printf("Merii Kurisumasu!\n");

		else if(strcmp("brasil\n", pais) == 0 ||
				strcmp("portugal\n", pais) == 0) printf("Feliz Natal!\n");
			
		else printf("--- NOT FOUND ---\n");
	}

	return 0;
}
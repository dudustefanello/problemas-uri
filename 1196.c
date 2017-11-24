#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	char entrada[5000];

	while(fgets(entrada, 5000, stdin))
	{
		for(i = 0; i < strlen(entrada); i++)
		{
			switch(entrada[i])
			{
				case 'B': printf("V"); break;
				case 'C': printf("X"); break; 
				case 'D': printf("S"); break;
				case 'E': printf("W"); break;
				case 'F': printf("D"); break;
				case 'G': printf("F"); break;
				case 'H': printf("G"); break;
				case 'I': printf("U"); break;
				case 'J': printf("H"); break;
				case 'K': printf("J"); break;
				case 'L': printf("K"); break;
				case 'M': printf("N"); break;
				case 'N': printf("B"); break;
				case 'O': printf("I"); break;
				case 'P': printf("O"); break;
				case 'R': printf("E"); break;
				case 'S': printf("A"); break;
				case 'T': printf("R"); break;
				case 'U': printf("Y"); break;
				case 'V': printf("C"); break;
				case 'W': printf("Q"); break;
				case 'X': printf("Z"); break;
				case 'Y': printf("T"); break;
				case '1': printf("`"); break;
				case '2': printf("1"); break;
				case '3': printf("2"); break;
				case '4': printf("3"); break;
				case '5': printf("4"); break;
				case '6': printf("5"); break;
				case '7': printf("6"); break;
				case '8': printf("7"); break;
				case '9': printf("8"); break;
				case '0': printf("9"); break;
				case '-': printf("0"); break;
				case '=': printf("-"); break;
				case '[': printf("P"); break;
				case ']': printf("["); break;
				case ';': printf("L"); break;
				case  39: printf(";"); break;
				case ',': printf("M"); break;
				case '.': printf(","); break;
				case '/': printf("."); break;
				case ' ': printf(" "); break;
				case'\\': printf("]"); break;
			}
		}
		printf("\n");
	}
}
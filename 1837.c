#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    int i;
    int a, b;
    int q, r;
 
    scanf("%d %d", &a, &b);

    if(a < 0){
    	if(b < 0){
    		for(i = 0; i * b > a; i++);
    	}
    	else{
    		for(i = 0; i * b > a; i--);
    	}
    	q = i;
    	r = a - q * b;
    }
   	else{
   		r = a % b;
   		q = a / b;
   	}

    printf("%d %d\n", q, r);
}
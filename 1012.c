#include <stdio.h>
#include <math.h>
 	/*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
main() 
{ 
	double a, b, c, pi = 3.14159;
	double tri, cir, tra, qua, ret;

	scanf("%lf%lg%lf", &a, &b, &c);
 	
 	tri = (a * c) / 2;
 	cir = pi * (c * c);
 	tra = ((a + b) * c) / 2;
 	qua = b * b;
 	ret = a * b;

 	printf("TRIANGULO: %.3f\n", tri);
 	printf("CIRCULO: %.3f\n", cir);
 	printf("TRAPEZIO: %.3f\n", tra);
 	printf("QUADRADO: %.3f\n", qua);
 	printf("RETANGULO: %.3f\n", ret);

    return 0;
}
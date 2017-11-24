#include <stdio.h>
  
main()
{
      double a, b, c, P, area;
    
      scanf("%lf %lf %lf", &a, &b, &c);
    
      area=((a+b)*c)/2;
    
      P=a+b+c;
    
      if (a>0 && b>0 && c>0 && a<b+c && b<a+c && c<a+b)
      {      
         printf("Perimetro = %.1lf\n", P);
      }
   
      else
      {
         printf("Area = %.1lf\n", area);
      }
}
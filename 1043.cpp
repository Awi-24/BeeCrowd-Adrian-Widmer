#include <stdio.h>
#include <stdlib.h>

int main(){

      double a,b,c;
      scanf("%lf %lf %lf", &a, &b, &c);   
        
      if(a + b > c && a + c > b && b + c > a)
            printf("Perimetro = %.1f\n", a + b + c);
      else
            printf("Area = %.1f\n", (a + b)*c / 2.0);
      return 0;
}
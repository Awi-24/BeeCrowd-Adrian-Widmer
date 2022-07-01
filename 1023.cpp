#include <stdio.h>
#include <math.h>


int main(){

      double a,b,c,R1,R2, t;
      scanf("%lf %lf %lf", &a, &b, &c);

      t = sqrt((b * b)-4*a*c);

      if(a == 0 || t < 0) {
            
            printf("Impossivel calcular\n");
            return 0;

      }
      else{

      R1 = (-b + t)/(2*a);
      R2 = (-b - t)/(2*a);
      printf("R1 = %.5lf\n", R1);
      printf("R2 = %.5lf\n", R2);
      }
      return 0;
}
//A fazer
#include <stdio.h>

int main(){

      double valor;
      scanf("%lf",&valor);
      
      if(valor >= 0.0000 && valor <= 25.0000){
            printf("Intervalo [0,25]\n");
      }
      else if(valor > 25.0000 && valor <= 50.0000){
            printf("Intervalo (25,50]\n");
      }
      else if(valor > 50.0000 && valor <= 75.0000){
            printf("Intervalo (50,75]\n");
      }
      else if(valor > 75.0000 && valor <= 100.0000){
            printf("Intervalo (75,100]\n");
      }
      else if(valor < 0.0000 || valor >100.0000){
            printf("Fora de intervalo\n");
      }

      return 0;
}
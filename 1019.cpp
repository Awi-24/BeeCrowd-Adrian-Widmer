#include <stdio.h>

int main(){

      int valor, horas, minutos, segundos;
      scanf("%d", &valor);
      horas = valor/3600;
      valor = valor%3600;
      minutos = valor/60;
      segundos = valor%60;

      printf("%d:%d:%d\n", horas, minutos, segundos);


      return 0;
}
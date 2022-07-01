#include <stdio.h>

int main(){

      int diaInicio, diaFim, horaInicio, horaFim, minutoInicio, minutoFim, segundoInicio, segundoFim;
      
      scanf("Dia %d", &diaInicio);
      scanf("%d : %d : %d\n", &horaInicio, &minutoInicio, &segundoInicio);
      scanf("Dia %d", &diaFim);
      scanf("%d : %d : %d ", &horaFim, &minutoFim, &segundoFim);

      segundoInicio = segundoFim-segundoInicio;
      minutoInicio = minutoFim-minutoInicio;
      horaInicio = horaFim-horaInicio;
      diaInicio = diaFim-diaInicio;

      if(segundoInicio < 0){
            segundoInicio += 60;
            minutoInicio--;
      }

      if(minutoInicio < 0){
            minutoInicio += 60;
            horaInicio--;
      }

      if(horaInicio < 0){
            horaInicio += 24;
            diaInicio--;
      }
      
      printf("%d dia(s)\n", diaInicio);
      printf("%d hora(s)\n", horaInicio);
      printf("%d minuto(s)\n", minutoInicio);
      printf("%d segundo(s)\n", segundoInicio);


return 0;
}
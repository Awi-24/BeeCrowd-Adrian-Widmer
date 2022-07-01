#include <stdio.h>
#include <stdlib.h>

int main(){

      int inicio, fim, aux=0;
      scanf("%d %d", &inicio, &fim);
      
      if(inicio == fim){
            printf("O JOGO DUROU 24 HORA(S)\n");
      }
      else{

            while(inicio!=fim){

                  inicio++;
                  aux++;
                  if(inicio == 24){
                        inicio=0;
            }
      }

      printf("O JOGO DUROU %d HORA(S)\n", aux);
     
      }
      return 0;
}

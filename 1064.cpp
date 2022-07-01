#include <stdio.h>

int main(){

      

      float aux, soma=0; 
      int i, n=0;
      for(i=0; i<6; i++){
            
            scanf("%f",&aux);
            if(aux > 0){
                  n++;
                  soma += aux;
            }
      }

      printf("%d valores positivos\n",n);
      printf("%.1f\n",soma/n);

return 0;
}
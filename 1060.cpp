#include <stdio.h>
#include <stdlib.h>


int main(){

      float aux; 
      int i, n=0;
      for(i=0; i<6; i++){
            
            scanf("%f",&aux);
            if(aux > 0){
                  n++;
            }
      }

      printf("%d valores positivos\n",n);

return 0;
}
#include <stdio.h>

int main(){

      int num, x, cont=0, cont2=0;
      scanf("%d", &num);
      for(int i=0; i<num; i++){
            scanf("%d",&x);
            if(x>=10 && x<=20){
                  cont++;
            } else 
            cont2++;
      }

      printf("%d in\n",cont);
      printf("%d out\n",cont2);
      return 0;
}

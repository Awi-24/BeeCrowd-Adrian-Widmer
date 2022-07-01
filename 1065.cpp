#include <stdio.h>

int main(){

      int num, aux=0;

      for (int i = 0; i < 5; i++)
      {
            scanf("%d", &num);
            if (num%2 == 0)
            {
                  aux++;
            }
      }
      printf("%d valores pares\n", aux);

return 0;
}

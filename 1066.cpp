#include <stdio.h>

int main(){

      int num, pares=0, impares=0, neg=0, pos=0;

      for (int i = 0; i < 5; i++)
      {
            scanf("%d", &num);
            if (num%2 == 0) pares++;
            else if (num%2 != 0) impares++;
            if (num < 0) neg++;
            else if (num > 0) pos++;

      }

      printf("%d valor(es) par(es)\n", pares);
      printf("%d valor(es) impar(es)\n", impares);
      printf("%d valor(es) positivo(s)\n", pos);
      printf("%d valor(es) negativo(s)\n", neg);

return 0;
}

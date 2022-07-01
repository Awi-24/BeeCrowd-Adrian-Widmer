#include <stdio.h>

int main(){

      float renda;
      scanf("%f", &renda);

      if(renda <= 2000){
            printf("Isento\n");
      }
      else if(renda > 2000 && renda <= 3000){
            printf("R$ %.2f\n", (renda - 2000) * 0.08);
      }
      else if(renda > 3000 && renda <= 4500){
            printf("R$ %.2f\n", (renda - 3000) * 0.18 + 80);
      }
      else if(renda > 4500){
            printf("R$ %.2f\n", (renda - 4500) * 0.28 + 80 + 270);
      }

return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main(){

      double nota0, nota1, nota2, nota3, media;
      scanf("%lf %lf %lf %lf", &nota0, &nota1, &nota2, &nota3);
      media = (2*nota0 + 3*nota1 + 4*nota2 + nota3)/10;
      double exame;
      printf("Media: %.1f\n", media);
      if(media >= 7.0) printf("Aluno aprovado.\n");
      else if(media >= 5.0 ){ 
            
            printf("Aluno em exame.\n");
            scanf("%lf", &exame);
            printf("Nota do exame: %.1f\n", exame);
            if((media+exame)/2.0 >= 5.0) printf("Aluno aprovado.\n");
            else printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", (media+exame)/2);

      }
      else if(media < 5.0) printf("Aluno reprovado.\n");
      
return 0;
}





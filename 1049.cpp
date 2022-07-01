#include <stdio.h>
#include <string.h>

typedef struct palavra{

      char palavra[100];
      char palavra2[100];
      char palavra3[100];

}palavra;

int main(){

      palavra animal;
      scanf("%s", animal.palavra);
      scanf("%s", animal.palavra2);
      scanf("%s", animal.palavra3);

      if(strcmp(animal.palavra, "vertebrado") == 0){
            if(strcmp(animal.palavra2, "ave") == 0){
                  if(strcmp(animal.palavra3, "carnivoro") == 0){
                        printf("aguia\n");
                  }
                  else if(strcmp(animal.palavra3, "onivoro") == 0){
                        printf("pomba\n");
                  }
            }
            else if(strcmp(animal.palavra2, "mamifero") == 0){
                  if(strcmp(animal.palavra3, "onivoro") == 0){
                        printf("homem\n");
                  }
                  else if(strcmp(animal.palavra3, "herbivoro") == 0){
                        printf("vaca\n");
                  }
            }
      }
      else if(strcmp(animal.palavra, "invertebrado") == 0){
            if(strcmp(animal.palavra2, "inseto") == 0){
                  if(strcmp(animal.palavra3, "hematofago") == 0){
                        printf("pulga\n");
                  }
                  else if(strcmp(animal.palavra3, "herbivoro") == 0){
                        printf("lagarta\n");
                  }
            }
            else if(strcmp(animal.palavra2, "anelideo") == 0){
                  if(strcmp(animal.palavra3, "hematofago") == 0){
                        printf("sanguessuga\n");
                  }
                  else if(strcmp(animal.palavra3, "onivoro") == 0){
                        printf("minhoca\n");
                  }
            }
      }

return 0;
}


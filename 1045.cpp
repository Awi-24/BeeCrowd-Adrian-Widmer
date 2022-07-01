#include <stdio.h>
#include <stdlib.h>

void insertionSort(float vet[], int size){
      int i, j;
      float key;
      for(i = 1; i < size; i++){
            key = vet[i];
            j = i - 1;
            while(j >= 0 && vet[j] > key){
                  vet[j + 1] = vet[j];
                  j--;
            }
            vet[j + 1] = key;
      }  
}

int main(){

      float a,b,c,vet[3];
      scanf("%f %f %f",&vet[0],&vet[1],&vet[2]);
      insertionSort(vet,3);
      a = vet[2];
      b = vet[1];
      c = vet[0];
      if(a >= b+c) printf("NAO FORMA TRIANGULO\n"); else{

            if(a*a == b*b + c*c) printf("TRIANGULO RETANGULO\n");
            if(a*a > b*b + c*c) printf("TRIANGULO OBTUSANGULO\n");
            if(a*a < b*b + c*c) printf("TRIANGULO ACUTANGULO\n");
            if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
            else if(a == b || b == c || a == c) printf("TRIANGULO ISOSCELES\n");

      }
      return 0;
}

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *array, int size){
      int i, j, aux;
      for(i = 1; i < size; i++){
            aux = array[i];
            j = i - 1;
            while(j >= 0 && array[j] > aux){
                  array[j + 1] = array[j];
                  j--;
            }
            array[j + 1] = aux;
      }
}

void printVetor(int *array, int size){
      int i;
      for(i = 0; i < size; i++)
            printf("%d\n", array[i]);
}

void scanVetor(int *array, int size){
      int i;
      for(i = 0; i < size; i++)
            scanf("%d", &array[i]);
}

void vetorCopy(int *array, int *array2, int size){
      int i;
      for(i = 0; i < size; i++)
            array2[i] = array[i];
}


int main(){

      int vet[3], vet2[3];
      scanVetor(vet, 3);
      vetorCopy(vet, vet2, 3);
      insertionSort(vet, 3);
      printVetor(vet, 3);
      printf("\n");
      printVetor(vet2, 3);

      return 0;
}

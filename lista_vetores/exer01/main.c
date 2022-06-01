#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cont, frequencia[10],vet[10];
  
  printf("\nInforme os elementos da matriz :\n ");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &vet[i]);
    frequencia[i] = -1;
  }

  for (int i = 0; i < 10; i++) {
    cont = 1;

    for (int j = i + 1; j < 10; j++) {
      if (vet[i] == vet[j]) {
        cont++;
        frequencia[j] = 0;
      }
    }
    if (frequencia[i] != 0) {
      frequencia[i] = cont;
    }
  }

  printf("\n frequencia de todos os elementos de um vetor \n");
  for (int i = 0; i < 10; i++) {
    if (frequencia[i] != 0) {
      printf(" \n%d ocorreu %d vezes \n ", vet[i], frequencia[i]);
    }
  }
  return 0;
}
//feito
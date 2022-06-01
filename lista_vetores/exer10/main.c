#include <stdio.h>
#include <string.h>

int main() {
  char nome[50], a[50];
  int i, qtdCaracter;

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", &nome);

  qtdCaracter = strlen(nome);

  for (i = 0; i < qtdCaracter; i++) {
    if ((nome[i] >= 'A') && (nome[i] <= 'Z')) {

      a[i] = nome[i] + 32;

    } else if ((nome[i] >= 'a') && (nome[i] <= 'z')) {
      a[i] = nome[i] - 32;
     
    } else {
      a[i] = nome[i];
    }
  }
  a[i] = '\0';

  printf("%s\n", a);
  

  return (0);
   }
   //feito
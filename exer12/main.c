#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float altura,peso_i;
  int sexo;
 
  printf("Digite sua altura em metros:\n");
  scanf("%f",&altura);
  printf("Digite seu sexo:\n 1 = masculino \n 2 = feminino \n");
  scanf("%i",&sexo);

    switch(sexo){ 
      case 1:
        peso_i = altura * 72.7 - 58;
        printf("O peso ideal é: %.2f",peso_i);
      break;
  
      case 2:
        peso_i = altura * 62.1 - 44.7;
        printf("O peso ideal é: %.2f",peso_i);
      break;
      default:
      printf("Sexo digitado incorreto");
    }
  return 0;
}
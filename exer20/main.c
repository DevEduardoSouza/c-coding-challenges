#include <stdio.h>

int main(void) {
  int idade;
  printf("Digite sua idade\n");
  scanf("%i",&idade);

  if(idade>= 5 && idade <= 7){
    printf("Sua categoria é infantil A");
  }else if (idade>= 8 && idade <= 10){
    printf("Sua categoria é infantil B");
  }else if (idade>= 11 && idade <= 13){
    printf("Sua categoria é juvenil A");
  }else if (idade>= 14 && idade <= 17){
    printf("Sua categoria é juvenil B");
  }else{
    printf("Sua categoria é adulto");
  }
  return 0;
}
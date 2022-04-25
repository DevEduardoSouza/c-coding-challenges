#include <stdio.h>

int main(void) {
  int nas, atual,idade,n_idade,dias,meses;
  printf("Informe o seu ano de nascimento e ano atual. \n");
  scanf("%i%i",&nas,&atual);
  
  idade = atual - nas;
  printf("Sua idade é %i anos \n",idade);

  n_idade = 2028 - nas  ;
  printf("\nVocê terá %i anos em 2028",n_idade);

  dias = idade * 365;
  printf("\nsua idade em dias: %i ",dias);

  meses = idade * 12;
  printf("\nSua idade em meses: %i  ",meses);
  

  return 0;

}
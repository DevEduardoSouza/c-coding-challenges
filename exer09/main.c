#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int publico;
  printf("Digite a quantidade do público da partida\n");
  scanf("%i",&publico);

  if(publico < 1000){
    printf("Público baixo");
  }else if(publico >= 1001 && publico <= 10000){
    printf("Público médio");
  }else{
    printf("Público bom");
  }
    
  return 0;
}
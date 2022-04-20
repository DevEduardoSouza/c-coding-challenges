#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float peso, resultado;
  int planeta;
  printf("Digite seu peso (KG):\n");
  scanf("%f",&peso);
  printf("\nEscolha o planeta para ver seu peso neste planeta\n");
  printf("\n 1 - Mercúrio \n 2 - Vênus \n 3 - Marte \n 4 - Júpiter \n 5 - Saturno \n 6 - Urano \n");
  scanf("%i", &planeta);

  switch (planeta){
    case 1:
    resultado = peso * 0.37;
    printf("Seu peso em Mercúrio é: %  .2f",resultado);
    break;
    
    case 2:
    resultado = peso * 0.88;
      printf("Seu peso em Vênus é: %.2f",resultado);
    break;
    
    case 3:
    resultado = peso * 0.38;
    printf("Seu peso em Marte é: %.2f",resultado);
    break;
    
    case 4:
    resultado = peso * 2.64;
    printf("Seu peso em Júpiter é: %.2f",resultado);
    break;
    
    case 5:
    resultado = peso * 1.15;
    printf("Seu peso em Saturno é: %.2f",resultado);
    break;
    
    case 6:
    resultado = peso * 1.17;
    printf("Seu peso em Urano é: %.2f",resultado);
    break;
    
  }

  return 0;
}
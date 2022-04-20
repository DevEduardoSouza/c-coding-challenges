#include <stdio.h>
#include <stdlib.h>


int main(void){
  int   cargo ; 
  float antigo_salario , novo_salario , diferencia_entre_ambos;
  
  printf("informe seu salario atual\n");
  scanf("%f", &antigo_salario);
  
  printf("\ndigite a opcao desejada para pesquisar seu novo salario\n");
  printf("\ncodigo disponiveis \n 1 = 310 \n 2 = 456 \n 3 = 885 \n 4 = outro \n");
  scanf("%i", &cargo);
  
  switch ( cargo )
    {
      //310
    case 1 :
    printf("\n seu antigo salario era: R$ %.2f", antigo_salario);
    novo_salario = (antigo_salario * 5.0)/100 + antigo_salario;
    printf("\n seu novo salario e: R$ %.2f", novo_salario );
    printf("\n a diferencia de ambos sao: R$ %.2f",novo_salario - antigo_salario); 
    break;

      
      //456
    case 2:
    printf("\n seu antigo salario era: R$ %.2f ", antigo_salario);
    novo_salario = (antigo_salario * 7.5)/100 + antigo_salario;
    printf("\n seu novo salario e: R$ %.2f", novo_salario);
    printf("\n a diferencia de ambos sao: R$ %.2f", novo_salario - antigo_salario);
    break;


      //885
    case 3 :
    printf("\n seu antigo salario era: R$ %.2f", antigo_salario);
    novo_salario = (antigo_salario * 10.0)/100 + antigo_salario;
    printf("\n seu novo salario e: %.2f", novo_salario);
    printf("\n a diferncia de ambos e de: R$ %.2f", novo_salario - antigo_salario);
    break;
      
      
      //outro
    case 4 :
    printf("\n seu antigo salario era: R$ %.2f", antigo_salario);
    novo_salario = (antigo_salario * 15.0)/100 + antigo_salario;
    printf("\n seu novo salario e: %.2f", novo_salario);
    printf("\n a diferncia de ambos e de: R$ %.2f", novo_salario - antigo_salario);
    break;
      
    default:{
      printf("o codigo que voce utilizou nao e valido");
      
    }
  
  return 0; 
}
}
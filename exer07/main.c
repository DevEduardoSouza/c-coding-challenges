#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float resultado;
  int preco, novo_preco;
  
  printf("Digite o preço do produto \n");
  scanf("%i",&preco);

  printf("\nQual a forma de pagamento? \n 1 - À visa em dinheiro ou cheque \n 2 - À vista no cartão de crédito \n 3 - Em duas vezes \n 4 - Em três vezes \n "); scanf("%i",&novo_preco);

  switch (novo_preco){
    case 1:
    resultado = preco - (preco * 0.10) ;
    printf(" Novo preço com desconto de 10%% é: R$ %2.f ", resultado);
    break;

    case 2:
    resultado = preco - (preco * 0.15) ;
    printf(" Novo preço com desconto de 15%% : R$ %2.f ", resultado);
    break;

    case 3:
    printf("Segue o preço normal : R$ %i ", preco);
    break;

    case 4:
      resultado = (preco * 0.10) + preco;
    printf("Acrésimo de 10%% : R$% 2.f", resultado);
  }
  
  return 0;
}
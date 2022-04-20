#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int prato, sobremesa, bebida;
  
  printf("Informe o prato: \n");
  printf(" 1 - vegetariano \n 2 - peixe \n 3 - frango \n 4 - carne \n");
  scanf("%i",&prato);
  
  printf("Informe a sobremesa: \n");
  printf(" 1 - abacaxi \n 2 - sorvete diet \n 3 - mouse diet \n 4 - mouse de chocolate \n");
  scanf("%i",&sobremesa);

  printf("Informe a bebida: \n");
  printf(" 1 - chá \n 2 - suco de laranja \n 3 - suco de melão \n 4 - refrigerante diet \n");
  scanf("%i",&bebida);

  switch (prato){
    case 1:
    prato = 180;
    break;

    case 2:
    prato = 230;
    break;

    case 3:
    prato = 250;
    break;

    case 4:
    prato = 350;
    break;
   
    
  }
  switch (sobremesa){
    case 1:
    sobremesa = 75;
    break;

    case 2:
    sobremesa = 110;
    break;

    case 3:
    sobremesa = 170;
    break;

    case 4:
    sobremesa = 200;
    break;
    
    
  }
  switch(bebida){
    case 1:
    bebida = 20;
    break;

    case 2:
    bebida = 70;
    break;

    case 3:
    bebida = 100;
    break;

    case 4:
    bebida = 65;
    break;
    
  }

  printf("Total de calorias da reifeção é : %i", prato + sobremesa + bebida);
  
  
  
  return 0;
}
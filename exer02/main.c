#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float saldo , credito;
  printf("digite o saldo medio\n");
  scanf("%f", &saldo);

  if ( (saldo >=0) && (saldo<201) ) {
    printf("NENHUM CRÉDITO");
    
   }else if ( (saldo>=201) && (saldo<401) ){
        credito = saldo * 0.2;
        printf("saldo medio: %.2f\n",saldo);
        printf("20%% de credito especial: %.2f ", credito);
    }else  if ( (saldo>=401) && (saldo<601) ){
        credito = saldo * 0.3;
        printf("saldo medio: %.2f\n",saldo);
        printf("30%% de credito especial: %.2f ", credito);
    }else if (saldo >= 601){
        credito = saldo * 0.4;
        printf("saldo medio: %.2f\n",saldo);
        printf("40%% de credito especial: %.2f ", credito);
    }else{
        printf("o saldo esta negativo");
    }
    
  
  return 0;
}
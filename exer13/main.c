#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2, num3, resultado;
  printf("Digite 3 números \n");
  scanf("%i%i%i",&num1, &num2, &num3);

  if(num1 > 0){
   resultado =  num1 * 3;
   printf("o tripo do primeiro número é: %i\n ", resultado);
   }else if (num1 < 0){
    resultado =  num1 * num1;
    printf("o quadrado é: -%i \n ", resultado);
  }

  if(num2  > 10 && num2 < 100){
    printf("\n o segundo Número  está entre 10 e 100 - intervalo permitido\n");
  }
  if(num3 < num2){
    resultado = num3-num2;
    printf("\ndiferença entre o terceiro e o segundo número é\n: %i",resultado);
   }else{
    printf("\n terceiro número +1 %i: ",num3 + 1);
  } 
  return 0;
}
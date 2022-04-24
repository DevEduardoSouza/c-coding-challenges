#include <stdio.h>

int main(void) {

  float kwh,consumo;
  printf("Digite o consumo de KWH do mês\n");
  scanf("%f",&kwh);

  if(kwh < 199){
    consumo = kwh * 1.202;
    printf("O valor do kwh é: R$ %.2f", consumo);
  }else if (kwh >= 199 && kwh < 400){
    consumo = kwh * 1.504;
    printf("O valor do kwh é: R$ %.2f", consumo);
  }else if (kwh > 400 && kwh < 600){
    consumo = kwh * 1.806;
    printf("O valor do kwh é: R$ %.2f", consumo);
  }else if (kwh > 600){
    consumo = kwh * 2.0;
    printf("O valor do kwh é: R$ %.2f", consumo);
  }
  return 0;
}
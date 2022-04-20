#include <stdio.h>

int main(void) {
  float freq , nota;

  printf("Informe a nota do aluno\n");
  scanf("%f",&nota);

  printf("Informe a frequencia do aluno (%)\n");
  scanf("%f",&freq);

  if(freq<=75 ){
    printf("REPROVADO");
  }else if (freq >= 75 && freq <=100 && nota<=3.0){
    printf("REPROVADO");
  }else if (freq >= 75 && freq <=100 && nota>=3.0 && nota<=7.0){
    printf("EXAME");
  }else if (freq >= 75 && freq <=100 && nota>=7.0 && nota<=10.0){
    printf("APROVADO");
  }

  return  0;
  }

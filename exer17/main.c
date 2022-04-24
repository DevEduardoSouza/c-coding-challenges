#include <stdio.h>

int main(void) {
  float horas, salario,hora_t,imposto,salario_receber;
  printf("Digite o números de horas trabalhadas\n");
  scanf("%f",&horas);
  printf("Informe o salário mínimo\n");
  scanf("%f",&salario);

  hora_t = salario * 0.10;
  salario = horas * hora_t; 
  imposto = salario * 0.03;
  salario_receber = salario - imposto ;
  printf("Salário a receber: R$ %.2f",salario_receber);
  
  return 0;
}
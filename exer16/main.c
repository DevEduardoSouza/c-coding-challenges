#include <stdio.h>

int main(void) {
  int inden;
  float n1,n2,n3,me,ma;
  printf(" Número de indentificação do aluno \n ");
  scanf("%i",&inden);
  
   printf(" Três notas obtidas por o aluno nas 3 verificações \n ");
   scanf("%f%f%f",&n1,&n2,&n3);

  printf("Média de exercícios\n");
  scanf("%f",&me);
  ma= ((n1+ n2) * (2 + n3) * (3 * me));
  

  if(ma >= 90){
    printf ( " A, aprovado");
  }else if (me >= 75 && me< 90){
    printf ( " B, aprovado");
  }else if (me >= 60&& me< 75){
    printf ( " C, aprovado");
  }else if (me >= 40 && me< 60){
    printf ( " D, reprovado");
  }else if (me<40){
    printf ( " E, reprovado");
  }
  return 0;
} 
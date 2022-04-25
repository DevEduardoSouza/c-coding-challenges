#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Informe os três valores dos lados do triângulo\n");
  scanf("%i%i%i",&a,&b,&c);
  if((a < b + c) && (b < a + c) && ( c < a + b) ){
    printf("Os valores informado corresponde ao um triângulo");
  }else{
    printf("Os valores informado  NÃO corresponde ao um triângulo");
  }
  return 0;
}
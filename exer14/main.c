#include <stdio.h>

int main(void) {
  int a,b,c,resultado;
  
  printf("Digite valores (A, B e C)\n");
  scanf("%i%i%i",&a,&b,&c);
  resultado = a + b;
  
  if(resultado < c){
    printf("A soma de a + b é menor que c");
  }else{
    printf("A soma de a + b é maior que c");
  }
  
  return 0;
}
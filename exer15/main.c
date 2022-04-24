#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Digite dois valores inteiros\n");
  scanf("%i%i",&a,&b);

  if(a == b){
    c = a + b;
    printf("Soma dos dois valore é : %i",c);
  }else{
    c = a * b;
    printf("A multiplicação dos dois valore é : %i",c);
  }
  return 0;
}
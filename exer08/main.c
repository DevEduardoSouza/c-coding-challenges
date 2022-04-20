#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Digite as medidas do triâgulo (a,b,c)\n");
  scanf("%i%i%i",&a,&b,&c);

  if(( a==b ) && (b != c) ){
    printf("Triângulo isósceles");
  }else if ((a==b) && (b==c)){
    printf("Triângulo equilátero");
  }else if ((a!=b) && (b!=c))
    printf("Triângulo escaleno");
  return 0;
}
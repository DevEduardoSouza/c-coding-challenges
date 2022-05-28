#include <stdio.h>

int main(void) {

  int  num[6], aux=0;
  
  for(int i = 0; i <=6 ;i++){
    printf("Informe um numero: ");
    scanf("%d",&num[i]);
  }

  for(int i = 0;i < 6 - 1; i++ )
  {
    for(int j = 0 ; j < 6 - i; j++ )
      {
        if(num[j] > num[j+ 1])
          {
          aux = num[j];
          num[j] = num[j+1];
          num[j+1] = aux;
          }
      }
  }

  printf("Os numeros em ordem crescente: ");
  for(int i = 0; i <=6 ;i++){
    printf("%d ",num[i]);

  }
  
    
   return 0;
}
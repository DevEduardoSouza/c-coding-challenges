#include <stdio.h>
#include <stdlib.h>

int main()
{
   
  int vetor[6], par[6]={0}, impar[6] = {0},contPar=0,contImpar= 0 ;

   printf("Informe 5 valores: ");
  for (int i = 0; i < 5; i++)
  {
      scanf("%d",&vetor[i]);
  }

  for (int i = 0; i < 5; i++)
  {
      if (vetor[i] % 2 == 0)
      {
          par[i] = vetor[i];
          ++contPar;
      }
      if(vetor[i] % 2 == 1){
          impar[i] = vetor[i];
          ++contImpar;
      }
  }


  printf("Os elemetos pares sao: \n");
  for (int i = 0; i <= contPar; i++)
  {
      if (par[i] != 0)
      {
          printf(" %d ",par[i]);
      }
  }

printf(" \n\n ");

printf("Os elemetos impares sao: \n");
  for (int i = 0; i <= contImpar; i++)
  {
      if (impar[i] != 0)
      {
          printf(" %d ",impar[i]);
      }
      
     
  }
  
  
  
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   
  int vetor[6], par[6]={0}, impar[6] = {0},contPar=0,contImpar= 0 ;
  int j = 0;

  printf("Informe 5 valores: ");
  for (int i = 0; i < 5; i++)
  {
      scanf("%d",&vetor[i]);
  }

  for (int i = 0; i < 5; i++)
  {
      if (vetor[i] % 2 == 0)
      {
          par[j] = vetor[i];
          j++;
          contPar++;     
      }

      if(vetor[i] % 2 != 0)
      {

          impar[i] = vetor[i];
      }
  }
  


  printf("Os elemetos pares sao: \n");
  for (int i = 0; i < contPar; i++)
  {
    
    printf(" %d ",par[i]);
    
  }

printf(" \n\n ");

printf("Os elemetos impares sao: \n");
  for (int i = 0; i <= 5; i++)
  {
      
      if (impar[i] > 0)
      {
          printf(" %d ",impar[i]);

      }
     
  }
  
    return 0;
}
//feito
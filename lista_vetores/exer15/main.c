#include <stdio.h>

int main(int argc, char const *argv[])
{
   
   float vetor[5], soma=0,media;

   for (int i = 0; i < 5; i++)
   {
       printf("Informe o valor: ",i);
       scanf("%f",&vetor[i]);
   }
   
   for (int i = 0; i < 5; i++)
   {
       soma = soma + vetor[i];
       media = soma / 5.0 ;
   }

   printf("\nA media dos  valores: %.2f",media);
   
   
    return 0;
}

//feito

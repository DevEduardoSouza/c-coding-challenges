#include <stdio.h>
#include <string.h>

int main()
{
   
   int vetor[10], valor, cont =0;

   for (int i = 1; i < 11; i++)
   {
       printf("Informe o %i° valor: ",i);
       scanf("%d",&vetor[i]);
   }

   printf("Busca um elemento no vetor: ");
   scanf("%d",&valor);

   for (int i = 1; i < 11; i++)
   {
       if (valor == vetor[i])
       {
         printf("\n\nO valor %d, foi encontrado na posicao %d",valor,i);
       }

       if (valor != vetor[i])
       {
           cont++;
       }
       
       if (cont == 10)
       {
          printf("\nA posicao nao foi encontrada");
       }
       
   }
   
    return 0;
}
//feito

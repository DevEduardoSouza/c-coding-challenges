#include <stdio.h>

int main(int argc, char const *argv[])
{
   
   int vetor[5],posi=0;

   for (int i = 1; i < 6; i++)
   {
       printf("Informe o %i° valor: ",i);
       scanf("%i",&vetor[i]);
   }
   printf("Qual posicao no vetor voce que saber: ");
   scanf("%i",&posi);

   for (int i = 1; i < 6; i++)
   {
       if (posi == vetor[i])
       {
        printf("%i na posicao %i", posi,i);
       } 
   }
   
    return 0;
}

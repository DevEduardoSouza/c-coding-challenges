#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   
  int vet1[6], vet2[6], soma[6], dife[6], multi[6];
  float divi[6];

   for (int i = 1; i < 6; i++)
   {
       printf("Informe o %d° valor do vetor 1: ",i);
       scanf("%d",&vet1[i]);
       
   }
     printf("\n\n");
    for (int i = 1; i < 6; i++)
   {
       printf("Informe o %d° valor do vetor 2: ",i);
       scanf("%d",&vet2[i]);
       
   }

    
    for (int i = 1; i < 6; i++)
    {
        soma[i] = vet1[i] + vet2[i];
        dife[i] = vet1[i] - vet2[i];
        multi[i] = vet1[i] * vet2[i];
        divi[i] = (float)vet1[i] / (float)vet2[i];
    }
    
    printf("\n\n soma\n");
    for (int i = 1; i < 6; i++)
    {
        printf("%d + %d = %d\n", vet1[i],vet2[i],soma[i]);
    }

    printf("\n\n subtracao\n");

    for (int i = 1; i < 6; i++)
    {
        printf("%d - %d = %d\n", vet1[i],vet2[i],dife[i]);
    }

    printf("\n\nMultiplicao\n");

    for (int i = 1; i < 6; i++)
    {
        printf("%d * %d = %d\n", vet1[i],vet2[i],multi[i]);
    }

    printf("\n\nDivisao\n");

    for (int i = 1; i < 6; i++)
    {
        printf("%d / %d = %.1f\n", vet1[i],vet2[i],divi[i]);
    }

    return 0;
}
//feito
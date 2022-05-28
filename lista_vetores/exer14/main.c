#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario[5],aumentoSalario=0;

   for (int i = 0; i < 5; i++)
   {
       printf("Informe o salario: ");
       scanf("%f",&salario[i]);
   }

   for (int i = 0; i < 5; i++)
   {
       if (salario[i] < 1000)
       {
           aumentoSalario = (salario[i] * 0.1) + salario[i];
           salario[i] = aumentoSalario;
       }
       
   }
   
   printf("\n");

   printf("Lista de salarios autalizados\n");

   for (int i = 0; i < 5; i++)
    {
       printf("\n R$ %.2f",salario[i]);
    }
    
     
   
    return 0;
}
//feito



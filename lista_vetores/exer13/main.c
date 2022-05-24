#include <stdio.h>

int main()
{
   float salario[10],maiorSalario=0;

   for (int i = 0; i < 10; i++)
   {
       printf("Informe o salario: ");
       scanf("%f",&salario[i]);
   }
   for (int i = 0; i < 10; i++)
   {
       if (salario[i] > maiorSalario)
       {
           maiorSalario = salario[i];
       }
       
   }
     printf("O maior o salario %.2f",maiorSalario);
   
    return 0;
}

//feito

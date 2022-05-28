#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k=0;
    char string[30] = {'\0'} , string2[30] = {'\0'};


   printf("Informe seu nome: ");
   gets(string);

   printf("Informe seu sobrenome: ");
   gets(string2);


   for (int i = 0; i < 30; i++)
   {
       if (string[i] == '\0')
       {
            string[i]  = string2[k];
            k++;      
       }       
   }
   
   for (int i = 0; i < 30; i++)
   {
       printf("%c",string[i]);
   }
   

    return 0;
}
//feito
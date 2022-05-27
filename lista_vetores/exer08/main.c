#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int k=0;
    char string[15], string2[15], string3[30];


   printf("Informe seu nome: ");
   gets(string);

   printf("Informe seu sobrenome: ");
   gets(string2);


   for (int i = 0; i < 15; i++)
   {
      
       if (string[i] == '\0')
       {
           for (int j = i ; j < 30; j++)
           {
               string[j] = string2[k];
               k++;
               
               if (string2[j] == '\0' )
               {
                   break;
               }
           }
              
       }
       
   }

   
   for (int i = 0; i < 30; i++)
   {
       printf("%c",string[i]);
   }
   
    
  

   
   
    return 0;
}

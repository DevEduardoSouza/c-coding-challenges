#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
   char string[30];

    printf("escreva uma palavra: ");
    gets(string);

    //usando for
   for (int i = 0; i < 30; i++)
   {
       if (string[i] == '\0')
       {
            printf("\nTotal de caracteres: %d ",i);
           break;
       }
       
   }

   //usando funcao
   printf("\n\nTotal de caracteres usando uma funcao: %d",strlen(string));

    return 0;
}
//feito
/*Escreva um programa em C para contar o número total de palavras em uma string.*/
#include <stdio.h>

int main()
{
    int  cont = 0;
    char string[60];

    printf("Escreva para eu descobir total de palavras");
    scanf("%[^\n]",string[60]);

    for (int i = 0; i <= 61; i++)
    {
        if (string == ' ');
        {
            cont++;
        }
        
    }

    printf("Total de palavavras e : %d", cont);
    

   
    return 0;
}

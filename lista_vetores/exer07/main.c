/*Escreva um programa em C para contar o número total de palavras em uma string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int  cont = 1;
    char string[30];

    printf("Escreva para eu descobir total de palavras\n");
    scanf("%[^\n]",string);

    for (int i = 0; i < 60; i++)
    {
        if (string[i] == ' ')
        {
            cont++;
        }
    }

    printf("Total de palavavras e : %d",cont);
   
    return 0;
}

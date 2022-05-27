#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[30];

    printf("Seu nome\n");
    scanf("%[^\n]",string);

    for (int i = strlen(string); i >= 0; i--)
    {
             printf("%c",string[i]);
    }
    return 0;
}//completo

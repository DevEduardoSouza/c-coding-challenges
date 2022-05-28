#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[5] = {1,2,3,4,5}, posicao;

    for (int i = 0; i < 5; i++)
    {
        printf(" %d",vetor[i]);
    }
    printf("\nInsira a posicao onde excluir: ");
    scanf("%d",&posicao);

    printf("\n");
    printf("A nova lista e: ");

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] != posicao)
        {
            printf(" %d",vetor[i]);
        }
        
    }
    
    
    return 0;
}
//feito

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num[10] = {0};
    int novoValor, posicao, aux, cont=1, aux2;

    
    for (int i = 0; i < 4; i++)
    {
        printf("Informe um valor: ");
        scanf("%d",&num[i]);

        if (num[i] == -1)
        {
            break;
        }
        
    }

    printf("Lista atual de valores no vetor\n");
    for (int i = 0; i < 4; i++)
    {
        printf(" %d",num[i]);
    }


    printf("\nInsira um novo valor: ");
    scanf("%d",&novoValor); 
    printf("\nInsira a posicao onde o novo valor a ser inserido: ");
    scanf("%d",&posicao); 

    for (int i = 0; i < 4; i++)
    {
        if (posicao == i)
        {
               aux = num[i];
                num[i] = novoValor;
            
            for (int j = 1; j < 5; j++)
            {
                aux = num[i+j];
                num[i+j] = novoValor;
 
            }
            
        }

        
    }

    
    printf("\nApos inserir o elemento, a nova lista e: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d",num[i]);
    }
    
    

    
    return 0;
}
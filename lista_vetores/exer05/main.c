#include <stdio.h>

int main()
{
    int vetor_ordenado[10]={0};
    int posicao=0, cont_qtd_valores = 0, valor;
    do
    {
        printf("\nDigite um valor: ");
        scanf("%d",&valor);
        posicao = 0;
        while (vetor_ordenado[posicao] < valor && vetor_ordenado[posicao]!=0)
        {
            posicao++;
        }

        for (int j = cont_qtd_valores; j >= posicao; j--)
        {
            vetor_ordenado [j+1] = vetor_ordenado[j];
        }
        cont_qtd_valores++;
        vetor_ordenado[posicao] = valor;

        for (int i = 0; i < cont_qtd_valores; i++)
        {
            printf("%d, ", vetor_ordenado[i]);
        }
        
        
    } while (valor !=-1 && cont_qtd_valores <10);
    

    return 0;
}


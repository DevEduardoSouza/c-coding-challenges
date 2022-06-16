#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Revisando matrizes

    int matriz [3][3];
    int matriz2 [3][3];
    int somaMatriz [3][3];

    //1° m
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ola , informe os numeros");
            scanf("%d",&matriz[i][j]);
        }
    }

    //2° m
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ola , informe os numeros");
            scanf("%d",&matriz2[i][j]);
        }
    }

  //somar
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
             somaMatriz[i][j] = matriz[i][j] + matriz2[i][j];   
        }
       
    }
    
   // imprimir a 1°
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

     // imprimir a 2°
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",matriz2[i][j]);
        }
        printf("\n");
    }
    
     // imprimir a soma
    printf("\n A soma das matrizes\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",somaMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

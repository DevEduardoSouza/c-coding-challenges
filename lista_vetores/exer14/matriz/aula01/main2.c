#include <stdio.h>
#include <stdlib.h>
/*
  Somar duas matrizes e salvar o resultado em uma terceira matriz
*/

int main()
{
    int  mat1[3][3];
    int  mat2[3][3];
    int  soma[3][3];

    printf("informe os valores da primera matriz\n");
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("Informe os valores %d %d: ",i , j);
            scanf("%d",&mat1[i][j]);
        }
        
    }

     printf("\n\ninforme os valores da segunda matriz\n");
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("Informe os valores %d %d: ",i , j);
            scanf("%d",&mat2[i][j]);
        }
        
    }

    printf("\n\nsoma das matrizes\n");

   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ",soma[i][j]);
        }
        printf("\n");
        
    }
    
    


    return 0;
}

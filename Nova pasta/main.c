/*
Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
*/
#include<stdio.h>

int main()
{
    int num[5];

    printf("Informe  um numeros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i",&num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i ",num[i]);

    }


    printf("\n\n");
    //imprimir numeros na ordem inversa


    for (int i = 4; i >= 0; i--)
    {
        printf("%i ",num[i]);
    }
    
    
    return 0;
}

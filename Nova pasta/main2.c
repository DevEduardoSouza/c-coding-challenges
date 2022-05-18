#include<stdio.h>
#include<string.h>

int main()
{
    int numAluno[2];
    int questao[10];
    char gabarito[30];

    for (int i = 0; i < 2; i++)
    {
        printf("informe o numero do aluno: ");
        scanf("%i",&numAluno[i]);
        for (int j = 0; j < 5; j++)
        {
            printf("\nInforme a resposta da %i questao: ",j);
            printf("A, B, C, D e E");
            scanf(" %s",&gabarito[i]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {

        printf("O numero do aluno: %i \n",numAluno[i]);

        for (int k = 1; k < 6; k++)
        {
            printf("O gabarito da questao %i : %c\n",k,gabarito[i]);
        }
        
    }
    
    
    return 0;
}

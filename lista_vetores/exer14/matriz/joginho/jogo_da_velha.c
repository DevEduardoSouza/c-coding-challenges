#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int hastag();
int opcInvalida();

int main()
{
    char matriz [3][3] = {'a'};
    int opcIniciar, opcPosicao, coluna = 0 , linha = 0;
    char opcLetra;

    printf("\tBem vindo ao jogo da velha 1.0\n");
    do
    {
        printf("\n Comecar o jogo - 1 , Sair - 2\n");
        scanf("%d", &opcIniciar);

        switch (opcIniciar)
        {
            // jogo
            case 1:
                hastag();
                do
                {
                    printf("\nEscolha a coluna onde ira colocar: ");
                    scanf("%d", &coluna);

                    printf("\nEscolha a linha onde ira colocar: ");
                    scanf("%d", &linha);

                    for ( int i = 0; i < 3; i++)
                    {
                        for ( int j  = 0; j < 3; j++)
                        {
                            if (i == linha && j == coluna)
                            {
                                 matriz[i][j] = 'x';    
                            }
                            
                        }
                        
                    }

                    //teste
                    printf("\n\n");
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j  < j; j++)
                        {
                            printf("%d", matriz[i][j]);
                        }
                        printf("\n");
             
                    }
                    
                    printf("\n\nEscolha entre 'X' ou 'O' ");
                    scanf(" %c", &opcLetra);
                    if (opcLetra == 'X' || opcLetra == 'x')
                    {
                        printf("\n1");
                    } 
                    else if (opcLetra == 'O' || opcLetra == 'o')
                    {
                        printf("\n2");
                    }else{
                        opcInvalida();
                    }
                
                } while (opcLetra != 'X' && opcLetra != 'x' &&opcLetra != 'O' && opcLetra != 'o' );
                
            break;

            case 2:
                printf("\nSaindo......");
            break;
            
            default:
                    opcInvalida();
            break;
        }
      
    } while (opcIniciar != 1 && opcIniciar != 2);
    
    
   
   
    return 0;
}


int hastag(){
     printf("\tC0   c1   c2\n");
     printf("l0\nL1\nl2");
}
int opcInvalida(){

    printf("\nOpcao Invalida");
    Sleep(1000);
    system("cls");
}
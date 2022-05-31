#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int opcao;
    int senha, senhaCadastro;
    char name[30];

    do
    {
        
        printf("\n\t\t\tBem vindo ao nosso programa\n\n");
        printf("Insira a opcao desejada.\n1 - login\n2 - Cadastra\n3 - Sair\n");
        scanf("%d",&opcao);

        do
        {
            /* code */
        
        
            switch (opcao)
            {
                case 1:
                    printf("\t\t\tLogin do usuario\n\n");
                    printf("Informe seu nome\n");
                    scanf(" %[^\n]",name);

                    
                    do
                    {
                        printf("Informe sua senha\n");
                        scanf("%d",&senha);

                        if (senha == senhaCadastro)
                        {
                            printf("\nSenha valida, Logando.......\n");
                            
                        }else{
                            printf("Senha Invalida....");
                        }

                    } while (senha != senhaCadastro);
                    
                break;

                case 2:
                    printf("\t\t\tCadastramento de  usuario\n\n");

                    printf("Informe seu nome\n");
                    scanf(" %[^\n]",name);

                    printf("\nInforme sua senha, apenas numeros e ate 4 digitos\n");
                    do
                    {
                            
                            scanf("%d",&senhaCadastro);

                            if (senhaCadastro > 9999)
                            {
                                printf("\nSenha nao valida. Por favor digite ate 4 digitos\n");
                            }else{
                                printf("\nSenha valida....\nUsuario cadastrado com sucesso\n");
                            }

                    } while (senhaCadastro > 9999 );

                break;

                case 3:
                    printf("\nSaindo......");
                break;
            
                default:
                    printf("\nOpcao Invalida\n");
                break;
            }

        } while (opcao > 3 && opcao < 1);

    } while (senha != senhaCadastro && opcao != 3);

    return 0;
}
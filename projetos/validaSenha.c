#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    int opcao, opcao_s_n;
    int senha, senhaCadastro;
    int contTrocar_senha=0;
    char name[30];

    do
    { 
        printf("\n\t\t\tBem vindo ao nosso programa\n\n");
        printf("Insira a opcao desejada.\n1 - login\n2 - Cadastra\n3 - Sair\n");
        scanf("%d",&opcao);
        Sleep(500);
        system("cls");

        do
        {
            
            switch (opcao)
            {
                case 1: // login de usuarios
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
                            printf("\nSenha invalida....\n");
                            contTrocar_senha++;
                        }
                        Sleep(1500);
                        system("cls");

                        if (contTrocar_senha == 4)//recuperara senha
                        {                           
                            do
                            {    
                                printf("\nDeseja recuperar sua senha? (1 - sim) ou (2 - nao)");  
                                scanf("%d",&opcao_s_n);
  
                                switch (opcao_s_n)
                                {
                                    case 1:
                                            printf("\nMudando a senha\n"); //nao completa
                                        break;

                                    case 2:
                                        
                                        break;
                                    
                                    default:
                                    printf("\nOpcao invalida\n");
                                    Sleep(1500);
                                    system("cls");
                                    
                                    break;
                                }
                                contTrocar_senha=0; //resetando cont, para aperecer esse if outras vezes
                            } while (opcao_s_n > 2 );

                        }

                    } while (senha != senhaCadastro);
                    
                break;

                case 2: // cadastrar usuarios 
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
                              efeitoCarregamento();
                              printf("\nSenha valida\nUsuario cadastrado com sucesso\n");
                            }
                             Sleep(4000);
                             system("cls");

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

int efeitoCarregamento(){
    printf("processando dados.");
    for (int i = 0; i < 3; i++)
    {
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);   
    }
}
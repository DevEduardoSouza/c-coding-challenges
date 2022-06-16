#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int exerString001(){

    char name[30];
    printf("Informe sue nome\n");
    gets(name);

    printf("\nSeja bem vindo, %s", name);
}

int exerString002(){
  
    int cont = 0;
    char name[30] = {'\0'};
    printf("Informe sue nome\n");
    gets(name);

    for (int i = 0; i < 30; i++)
    {
        if (name[i] != '\0')
        {
            cont++;
        }
        
    }
    printf("\nTamanho da string : %d", cont);
}

int exerString003(){
    
    char name[30];

    printf("Informe seu nome\n");
    gets(name);

    if (name[0] == 'a' || name[0] == 'A' )
    {
      printf("\n%s", name);
    }
}

int exerString004(){

    char name[30]; 

    printf("Informe seu nome\n");
    gets(name);

    for (int i = 0; i < 4; i++)
    {
        printf("%c", name[i]);
    }
    
}

int exerString005(){

    int cont = 0;
    char name[30] = '\0';

    printf("Informe seu nome\n");
    gets(name);

    for (int i = 0; i < 30; i++)
    {
        if (name != ' ' && name != '\0')
        {
            cont++;
        }
        
    }
    printf("\nOla %s, seu nome tem %d de letras,",name, cont);

}


int main()
{
    exerString002();
    return 0;
}

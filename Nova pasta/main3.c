#include <stdio.h>
int exerVetores01(){

    /*
    Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
    Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
    fim, imprima os dois vetores.
    */

    int valores[10], quadrado[10];

    for (int i = 1; i < 11; i++)
    {
        printf("Informe o valor %i: ",i);
        scanf("%i",&valores[i]);
    }

    for (int i = 1; i < 11; i++)
    {
        quadrado[i] = valores[i] * valores[i];
    }

    for (int i = 1; i < 11 ; i++)
    {
       printf("\n%i",valores[i]);
    }

    printf("\n\nO seu quadrado\n\n");

    for (int i = 1; i < 11 ; i++)
    {
       printf("\n%i",quadrado[i]);
    }
    
}

int exerVetores02(){
    
    /*
    Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
    em um terceiro vetor. Imprima os três vetores na tela.
    */
    int vetor1[5], vetor2[5], somaVetores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor %i: ",i);
        scanf("%i",&vetor1[i]);
    }
    
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor %i: ",i);
        scanf("%i",&vetor2[i]);
    }

     printf("\n Soma dos vetores\n");
    for (int i = 0; i < 5; i++)
    {
        somaVetores[i] = vetor1[i] + vetor2[i];
        printf("\n%i + %i = %i: ",vetor1[i],vetor2[i],somaVetores[i]);
    }


}

int exerVetores03(){
    
    /*
    Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
    o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
    modificado.
    */

    int vetor1[5], somaVetores[5];

    for (int i = 0; i < 4; i++)
    {
        printf("Informe o valor %i: ",i);
        scanf("%i",&vetor1[i]);
    }

     for (int i = 0; i < 4; i++)
    {
        printf("\nInforme o valor %i : %i ",i,vetor1[i]);
        
    }

    printf("\n\n");
    int aux;
    for (int i = 0; i < 1; i++)
    {
        aux = vetor1[i];
        vetor1[i] = vetor1[4];
        vetor1[4] = aux;
        vetor1[4]--;
    }
    for (int i = 0 ; i < 3; i++)
    {
        printf(" %i",vetor1[i]);
    }
    
    
    
   
    

    

}


int main()
{
    exerVetores03();
    return 0;
}

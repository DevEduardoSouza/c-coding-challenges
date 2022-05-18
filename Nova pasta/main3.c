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
        somaVetores[5] = vetor1[i] + vetor2[i];
        printf("\n%i + %i = %i: ",vetor1[i],vetor2[i],somaVetores[5]);
    }


}



int main()
{
    exerVetores02();
    return 0;
}

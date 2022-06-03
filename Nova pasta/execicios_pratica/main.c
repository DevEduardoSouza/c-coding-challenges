#include <stdio.h>
#include <stdlib.h>


int exer001()
{
    /*
    1. Fac ̧a um programa que possua um vetor denominado A que armazene 6 numeros intei-  ́
    ros. O programa deve executar os seguintes passos:

        (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
        (b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic ̧  ́ oes  ̃
        A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
        (c) Modifique o vetor na posic ̧ao 4, atribuindo a esta posic ̧  ̃ ao o valor 100.  ̃
        (d) Mostre na tela cada valor do vetor A, um em cada linha.
            
    */

    int vetor[6]={1, 0, 5, -2, -5, 7};
    int soma;

    soma = vetor[0] + vetor[1] + vetor [5];
    printf("%d + %d + %d = %d", vetor[0],vetor[1],vetor[5],soma);
    vetor[4] = 100;

    printf("\n");
    for (int i = 1; i < 6; i++)
    {
        printf("Indice [%d] = %d\n",i,vetor[i]);
    }
    
    return 0;
}
int exer002()

{
    /*
   Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
            
    */

   int vetor[6];
   for (int i = 0; i < 6; i++)
   {
       printf("Informe um numero inteiro: ");
       scanf("%d", &vetor[i]);
   }
   for (int i = 0; i < 6; i++)
   {
       printf("\n%d",vetor[i]);
   }
   
   
}
int exer003()
{
    /*
   Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
    10 elementos cada. Imprimir todos os conjuntos.
            
    */

   float vetor[10],armazenarQuadrado[10];

   for (int i = 0; i < 10; i++)
   {
       printf("Informe um numero real: ");
       scanf("%f",&vetor[i]);
   }

    printf("\nValor ao quadrado dos numeros\n");
    for (int i = 0; i < 10; i++)
   {
       armazenarQuadrado[i] = vetor[i] * vetor[i];
       printf("%.2f x %.2f = %.2f\n",vetor[i], vetor[i],armazenarQuadrado[i]);
       
   }
  
   
}
int exer004()
{
    /*
    Fac ̧a um programa que leia um vetor de 8 posic ̧oes e, em seguida, leia tamb  ̃ em dois va-  ́
    lores X e Y quaisquer correspondentes a duas posic ̧oes no vetor. Ao final seu programa  ̃
    devera escrever a soma dos valores encontrados nas respectivas posic ̧  ́ oes  ̃ X e Y
            
    */

   int vetor[8], posicao,posicao2,soma;
   int j=0;

   for (int i = 0; i < 8; i++)
   {
       printf("Informe um numero inteiro: ");
       scanf("%d",&vetor[i]);
   }
   printf("\nEscolha duas posicoes para somar os valores: ");
   scanf("%d",&posicao);
    scanf("%d",&posicao2);

   //for, para encontra minha primera posicao
   for (int i = 0; i < 8; i++)
   {
       /*if, se meu i for = a posicao, pq eu encontrando o valor da minha primeira posicao posso achar agora somete o valor da minha segunda posicao */
       if (i == posicao)
       {
           //para achar minha segunda posição
           for ( j = j+0; j < 8; j++)
           {
                if (j == posicao2)
                {
                    soma  = vetor[i] + vetor[j];
                    printf("\n%d + %d = %d",vetor[i],vetor[j],soma);
                }
           }
       }
       
       
       
   }
  
}
int exer005()
{
    /*
    Leia um vetor de 10 posic ̧oes. Contar e escrever quantos valores pares ele possui.
            
    */

   int vetor[10],par[10],contaPar=0;
   int j =0;

   for (int i = 0; i < 10; i++)
   {
       printf("Digite um valor: ");
       scanf("%d", &vetor[i]);
   }
   
   for (int i = 0; i < 10; i++)
   {
       if (vetor[i] % 2 == 0)
       {
           par[j] = vetor[i];
           j++;
           contaPar++;
       }
       
   }

   printf("\nOs numeros pares sao\nTotal de pares: %d\n",contaPar);
   for (int i = 0; i < contaPar; i++)
   {
       printf("%d, ",par[i]);
   }
}
int main()
{
    exer005();
    return 0;
}

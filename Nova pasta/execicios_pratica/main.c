/*Link:

    https://classroom.google.com/u/0/w/NDU5Njg3NTU3MDE2/t/all
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


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
int exer006()
{
    /*
    Fac ̧a um programa que receba do usuario um vetor com 10 posic ̧  ́ oes. Em seguida dever  ̃ a ́
     ser impresso o maior e o menor elemento do vetor.
            
    */

   int vetor[10], maiorNumero=0, menorNumero=0;
  

   for (int i = 0; i < 10; i++)
   {
       printf("Digite um valor: ");
       scanf("%d",&vetor[i]);

       if (i == 0)
       {
           menorNumero = vetor[i];
       }
       
       if (vetor[i] > maiorNumero)
       {
          maiorNumero = vetor[i];
       }
       if (vetor[i] < menorNumero)
       {
           menorNumero = vetor[i];
       }
   }

   printf("\n\nO maior numero: %d\n",maiorNumero);
   printf("O menor numero: %d\n",menorNumero);
}
int exer007()
{
    /*
   Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posic ̧ao que ele se encontra.
    */

   int vetor[10], maiorNumero=0, posicaoMaior;

   for (int i = 1; i < 11; i++)
   {
       printf("Digite um valor inteiro: ");
       scanf("%d",&vetor[i]);
   }

   for (int i = 1; i < 11; i++)
   {
        if (vetor[i] > maiorNumero)
        {
            maiorNumero = vetor[i];
            posicaoMaior = i;
        }
   }
   

   printf("\n\nO numero maior e %d e esta na posicao %d",maiorNumero,posicaoMaior);
}
int exer008()
{
    /*
   Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
    */

   int vetor[6];

   for (int i = 0; i < 6; i++)
   {
       printf("Digite um valor inteiro: ");
       scanf("%d",&vetor[i]);
   }

   printf("\n\nos numero em ordem inversa: ");
   for ( int i = 5; i >= 0; i--)
   {
     printf(" %d",vetor[i]);
   }
   
}
int exer009()
{
    /*
    Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.
    */

   int vetor[6], par[6], j=0, contaPar=0;

   for (int i = 0; i < 6; i++)
   {
       printf("Digite um valor inteiro : ");
       scanf("%d",&vetor[i]);

       if (vetor[i] % 2 == 0)
       {
           par[j] = vetor[i]; 
           j++;
           contaPar++;
       }
       
   }

   printf("\n\nos numero em ordem inversa dos numeros pares: ");
   for ( int i = contaPar - 1; i >= 0; i--)
   {
     printf(" %d",par[i]);
   }
   
}
int exer010()
{
    /*
    Fac ̧a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.
    */

   float nota[15], mediaTurma, somaNotas=0;

   for (int i = 1; i < 16; i++)
   {
       printf("Insira a nota do  aluno %d : ",i);
       scanf("%f",&nota[i]); 
   }
   
   for (int i = 1; i < 16; i++)
   {
       somaNotas = somaNotas + nota[i];
   }

   mediaTurma =  somaNotas / 15.0;
   
   system("cls");
   printf("\n\nA medida da turma %.2f\n\n",mediaTurma);
   
}
int exer011()
{
    /*
   Fac ̧a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a quantidade de numeros negativos e a soma dos n  ́ umeros positivos desse vetor.
    */

   float num[10], soma=0;
   int contNegativo = 0;

 
   for (int i = 0; i < 10; i++)
   {
       printf("Insira um numero real : ");
       scanf("%f",&num[i]);    
   }
   
   for (int i = 0; i < 10; i++)
   {
       if (num[i] < 0)
       {
           contNegativo++;
       }
       else if (num[i] > 0)
       {
           soma = soma + num[i];
       }
   }

   printf("\nA quantidade de numeros negativos e: %d\nA soma dos numeros positivos: %.2f",contNegativo,soma); 
}
int exer012()
{
    /*
   Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
   juntamente com o maior, o menor e a media dos valores.
    */

   int num[5], maiorNum=0, menorNum=0, soma=0;
   float media;
  

 
   for (int i = 0; i < 5; i++)
   {
       printf("Insira um numero interio: ");
       scanf("%d",&num[i]);
   }

   Sleep(1000);
   system("cls");

   printf("Todos os valores lidos:");
   for (int i = 0; i < 5; i++)
   {
       if(i == 0 ){
          menorNum = num[i];
       } 
       if(num[i] > maiorNum){
           maiorNum = num[i];
       }
       if(num[i] < menorNum){
            menorNum = num[i];
       }
        soma = soma + num[i];
        printf("%d ",num[i]);
   }

    media = soma / 5.0; 
    printf("\n\n o maior numero: %d\no menor numero: %d\nA media dos numeros: %.2f",maiorNum,menorNum,media);
}
int exer013()
{
    /*
   Fazer um programa para ler 5 valores e, em seguida, mostrar a posic ̧ao onde se encon-tram o maior e o menor valor.
    */

   int num[5], maiorNum=0, menorNum=0, posicaoMaior=0, posicaoMenor=0;

   
  

 
   for (int i = 0; i < 5; i++)
   {
       printf("Insira um numero interio: ");
       scanf("%d",&num[i]);
   }

  
   for (int i = 0; i < 5; i++)
   {
       if(i == 0)
       {
          menorNum = num[i];
       } 
       if(num[i] > maiorNum)
       {
           maiorNum = num[i];
           posicaoMaior = i;
       }
       if(num[i] < menorNum)
       {
            menorNum = num[i];
            posicaoMenor = i;
       }

   }

    printf("\n\n o maior numero: %d, e ele esta na posicao %d\no menor numero: %d, e ele esta na posicao %d\n",maiorNum,posicaoMaior,menorNum,posicaoMenor);
}
int main()
{
    exer013();
    return 0;
}

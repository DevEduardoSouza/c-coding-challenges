#include <stdio.h>

int main()
{
    int numero[3],cont=0;

    for(int i= 0; i < 3; i++)
    {
        printf("Informe o %i° numero: ",i);
        scanf("%i",&numero[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; i < 4; i++)
        {
            if ( numero[i] == numero[j])
            {
                cont = cont + 1;
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n%i ocorre %i vez",numero[i],cont);
    }
    
    return 0;
}

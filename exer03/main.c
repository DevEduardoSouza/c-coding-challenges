#include <stdio.h>

int main(void) {
  int idade , dosagem;
  float peso;

  printf("informe a idade do pasciente \n");
  scanf("%i", &idade);
  
  printf("informe o peso (KG) do pasciente \n");
  scanf("%f", &peso);

  if( (idade >= 12) && (peso >= 60) ){
    dosagem = 1000 / 25;
    printf("o paciente deve tomar 1000mg = %i gotas do medicamento \n",dosagem);
    
  }else if(idade >= 12){
    dosagem = 875 / 25;
    printf("o paciente deve tomar 875mg = %i gotas do medicamento \n",dosagem);
  }else if ((idade < 12) && (peso>=5) && (peso <= 9) ){
    dosagem = 125 / 25;
    printf("o paciente deve tomar 125mg = %i gotas do medicamento \n",dosagem);
  }else if ( (peso>=9.1) && (peso <= 16) ){
     dosagem = 250 / 25;
     printf("o paciente deve tomar 250mg = %i gotas do medicamento \n",dosagem);
  }else if ( (peso>=16.1) && (peso <= 24) ){
     dosagem = 375 / 25;
     printf("o paciente deve tomar 375mg = %i gotas do medicamento \n",dosagem);
  }else if ( (peso>=24.1) && (peso <= 30) ){
     dosagem = 500 / 25;
     printf("o paciente deve tomar 500mg = %i gotas do medicamento \n",dosagem);
  }else if ( peso>30 ){
     dosagem = 750 / 25;
     printf("o paciente deve tomar 750mg = %i gotas do medicamento \n",dosagem);
  }else{
    printf(" erro , peso minimo : 5 kg ");
  }
  
  
  return 0;
}
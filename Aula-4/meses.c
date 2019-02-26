/*
Programa recebe um número de 1 à 12 e diz se o mês tem 31 dias ou não:
*/
#include <stdio.h>

int main(void) {
  
  int mes;
  printf("Digite um número de 1 à 12:");
  scanf("%d", &mes);
  
  if(mes>=1 && mes<=12){
    switch(mes){
    case 2:
    case 4:
    case 6:
    case 9:
    case 11:
      printf("Mês não tem 31 dias."); //Como os meses que não tem 31 dias estão em menor numero eles são checados primeiro
      break;
    default:
      printf("Mês tem 31 dias."); //Os que não entraram em um case tem 31 dias
      break;
    }
  
  }else{
    printf("Inválido...");
  }
  return 0;
}

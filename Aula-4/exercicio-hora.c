/*
Escreva um programa no qual o usuário informe apenas a parte
inteira da hora e exiba a mensagem de bom dia, boa tarde ou boa
noite com if aninhados;
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int hora;

  printf("Digite um horário: ");
  scanf("%d", &hora);

  if(hora >= 0 && hora <= 24){
    if(hora >= 0 && hora <= 12){
      printf("\nBom Dia!");
    }
    if(hora > 12 && hora <= 18){
      printf("\nBoa Tarde!");
    }
    if(hora > 18 && hora <= 24){
      printf("\nBoa Noite!");
    }
  }
  else{
    printf("Horário Inválido.");
  }

  return 0;
}

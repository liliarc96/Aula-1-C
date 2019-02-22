//Calculadora de Fatorial:
#include <stdio.h>

int main(void) {
  int numero, contador, fatorial;
  
  printf("\nDigite um numero inteiro maior que zero: ");
  scanf("%d", &numero);
  
  fatorial = numero;

  if(numero > 0){
    for(contador = 1; numero > contador-1 ;contador++){
        fatorial = fatorial*(numero-contador);
      }
    printf("\n!%d é igual a: %d", numero, fatorial);
  }
  else{
    printf("ERRO.");
  }
  
  return 0;
}

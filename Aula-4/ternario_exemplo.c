#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b;
/*
  if(a == b){
    printf("A é igual a B");
  }
  else{
    printf("A é diferente de B");
  }

condicao_logica ? expressa_se_verdadeira : expressao_se_falsa
Exemplo: x = (a == b)?(a):(b);
  a = 2;
  b = 3;
*/
  a=2;
  b=3;
  (a==b)?(printf("A = B")):(printf("A != B"));
  a=b=4;
  (a==b)?(printf("A = B")):(printf("A != B"));
  return 0;
}

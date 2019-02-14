#include <stdio.h> //Inclusão de bibliotecas

void olaMundo();
//A função olaMundo não funciona sem o void olaMundo(); se não for posicionada antes do main.
/*
void olaMundo(){
  printf("%f", "Olá Mundo");
}
*/
int main(){
  float num1; //Variáveis locais
  
  olaMundo(); //Chamada de funções
  return 0;
}

void olaMundo(){
  printf("%f", "Olá Mundo");
}

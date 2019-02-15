/*
• Escreva um programa que declare uma variável do tipo char sem sinal e atribua a ela um valor acima de 127 e imprima-a na tela;
• Avalie: o que ocorreu com o retorno? Corresponde ao valor que foi atribuído?
*/
#include <stdio.h>

int main() {
	unsigned char teste_char = 255;
	char teste_char2 = 127;
	printf("\nUnsigned é igual a %d e signed é igual a %d.", teste_char, teste_char2);
/*
	teste_char = 256;
	teste_char2 = 128;
	printf("\nUnsigned é igual a %d e signed é igual a %d.", teste_char, teste_char2);

	teste_char = 300;
	teste_char2 = 200;
	printf("\nUnsigned é igual a %d e signed é igual a %d.", teste_char, teste_char2);
  return 0;
*/
}

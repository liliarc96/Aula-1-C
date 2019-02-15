//Testes com variáveis locais:
#include <stdio.h>

void funcao(){
	unsigned char teste_char = 200;
	char teste_char2 = 100;
	printf("\nUnsigned é igual a %d e signed é igual a %d.", teste_char, teste_char2);
}

int main() {
	unsigned char teste_char = 255;
	char teste_char2 = 127;
	printf("\nUnsigned é igual a %d e signed é igual a %d.", teste_char, teste_char2);

	funcao();

	return 0;
}

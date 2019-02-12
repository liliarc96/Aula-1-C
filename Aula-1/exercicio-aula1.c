//Usuário digita dois números interos e a multiplicação desses números é mostrada no final do programa.

#include <stdio.h>

int main() {
  //Variáveis:
  int primeiroNum, segundoNum, multiplicacao;

	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiroNum);

	printf("Digite o segundo valor: ");
	scanf("%d", &segundoNum);

	multiplicacao = primeiroNum * segundoNum;

	printf("\nO primeiro valor é igual a %d e o segundo valor eh igual a %d.\n\n", primeiroNum, segundoNum);
	printf("A multiplicação dos dois números eh igual a: %d.\n", multiplicacao);

  return 0;
}

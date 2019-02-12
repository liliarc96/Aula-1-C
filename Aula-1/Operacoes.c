#include <stdio.h>

int main(void) {
  //Variáveis:
  int numA = 5;
	int numB;

	numB = 1 + ((2 * numA) * (5 - (8 * numA)));
	// É igual -> numB = 1 + 2 * numA * 5 - 8 * numA;
  
	printf("O valor final é igual a: %d", numB);

  return 0;
}

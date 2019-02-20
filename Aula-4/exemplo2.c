#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 10;
	int b = 10;
	unsigned char c;
	unsigned char d;
	unsigned char e;

	c = (a == b);
	d = (a == c);
	e = (a == c ||  a == b);

	printf("O valor de C é: %d\n", c);
	printf("O valor de D é: %d\n", d);
	printf("O valor de E é: %d\n", e);

	/*
O valor de C é: 1
O valor de D é: 0
O valor de E é: 1
	*/
	return 0;
}

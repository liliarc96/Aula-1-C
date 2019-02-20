#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 10;
	int b = 10;
	unsigned char c;
	unsigned char d;
	unsigned char e;

	c = (a == b); // c recebe o valor de (a == b), o valor de a é 10 e o de b também é 10, o que significa que c recebeu true (c = 1)
	d = (a == c); // d recebe o valor de (a == c), o valor de a é 10 e o de c é 1, o que significa que d recebeu false (d = 0)
	e = (a == c ||  a == b); // e recebe o valor de (a == c ||  a == b), ou seja (0 || 1) = true, significa que e recebeu true (e = 1)

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

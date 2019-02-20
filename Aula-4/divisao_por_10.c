#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 0;
	int b = 10;

	printf("Digite um número para dividir 10:\n");
	scanf("%d", &a);
	
	if(a){
		printf("%.2f\n", (float)10/a); // %.(número_de_casas_depois_da_vírgula)f
	}
	else{
		printf("Você digitou zero!\n");
	}

	return 0;
}

#include <stdio.h>
//Declaração de variável global:
char *nome_programa = "Calculando Média";

int main(void) {
  int idade1 = 0, idade2 = 0, i;
	float media;

	printf("%s\n", nome_programa);

	//Valor do contador i começa igual a 0, se o valor de i for maior que 2 é adicionado +1 a i ao final da operação:
	for(i = 0; i < 2; i++){
		printf("Informe a idade %d: ", i + 1);
		if(i == 0){
			scanf("%d", &idade1);
		}
		else{
			scanf("%d", &idade2);
		}
	}
	/*
	Cast explícito para auxiliar o compilador a informar o resultado com casas decimais.
	*/
	media = (float)(idade1 + idade2)/1;

	printf("A média de idade é: %.2f\n", media);
	return 0;
}

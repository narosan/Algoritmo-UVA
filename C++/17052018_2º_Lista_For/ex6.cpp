/*
6) Preencher um vetor com n�meros inteiros (8unidades); solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor
 e qual a ordem foi digitada. Se n�o existir, imprimir mensagem que n�o existe.
*/

#include <stdio.h>

main () {
	int num[8], busca = 0, i, achei = 0,num_vet;
	
	for(i=1;i<8;i++) {
		printf("Informe um numero: ");
		scanf("%i", &num[i]);
	}
	
	printf("Informe um numero para ser pesquisado no vetor: ");
	scanf("%i", &busca);
	
		for(i=1;i<8;i++) {
			if(num[i] == busca) {
				num_vet = i;
				achei ++;
			}
		}
		
	if(achei > 0) {
		printf("O numero %i est� na posi�ao %i do vetor.", busca, num_vet);
	}
	else {
		printf("Vetor nao existe.");
	}
	
}

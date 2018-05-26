/*
01) Criar um algoritmo para preencher com valores numéricos 
uma matriz 4 x 4 e que em seguida exiba na tela os 
elementos da diagonal principal.
*/
#include <stdio.h>

main() {
	int num[4][4], l, c;
	
	for(l=0;l<4;l++) {
		for(c=0;c<4;c++) {
			printf("Informe um numero para a linha %i coluna %i:\t", l, c);
			scanf("%i", &num[l][c]);
		} 
	}
	
	for(l=0;l<4;l++) {
		for(c=0;c<4;c++) {
			if(l == c) {
				printf("%i", num[l][c]);
			}else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
}

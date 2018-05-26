/*
02) Criar um algoritmo para preencher com valores numéricos 
uma matriz 3 x 3 e que em seguida exiba na tela os elementos
 que não fazem parte da diagonal principal.
*/

#include <stdio.h>

main() {
	int num[3][3], l, c;
	
	for(l=0;l<3;l++) {
		for(c=0;c<3;c++) {
			printf("Informe um numero para a linha %i coluna %i:\t", l, c);
			scanf("%i", &num[l][c]);
		} 
	}
	
	for(l=0;l<3;l++) {
		for(c=0;c<3;c++) {
			if(l != c) {
				printf("%i", num[l][c]);
				printf("\t");
			}else 
				printf("\t");
		}
		printf("\n");
	}

}

/*
03) Criar um algoritmo para preencher uma matriz 3 x 3 com número inteiros 
e depois exibir na tela outra matriz (matriz nova) multiplicando cada elemento da primeira matriz por 2.
*/

#include <stdio.h>

main() {
	int num[3][3], l, c, aux = 0;
	
	for(l=0;l<3;l++) {
		for(c=0;c<3;c++) {
			printf("Insira um valor para a linha %i coluna %i:\t", l, c);
			scanf("%i", &num[l][c]);
		}
	}
	
	printf("Matriz multiplicada por 2\n");
	
	for(l=0;l<3;l++) {
		for(c=0;c<3;c++) {
			printf("%i\t", num[l][c] * 2);
		}
		printf("\n");
	}
	
	
}

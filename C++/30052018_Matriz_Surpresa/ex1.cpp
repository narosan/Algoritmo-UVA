/*
1) Atividade extra de Matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void inverteMatriz(int num[2][4], int l, int c) {
	
	printf("\n\tMatriz invertida\n\n");
	
	for(l=1;l>=0;l--) {
		for(c=3;c>=0;c--) {
			printf("%i\t", num[l][c]);
		}
		printf("\n");
	}
}

main() {
	setlocale(LC_ALL,"Portuguese");
	system("color 0d");
		
	int num[2][4];
	int l, c;
	
		for(l=0;l<2;l++) {
			for(c=0;c<4;c++) {
				if(l == 0){
					nCol:
						printf("Informe um número para a linha %i coluna %i:\t", l, c);
						scanf("%i", &num[l][c]);
							if(num[l][c] == 0 || num[l][c] > 11) {
								printf("\nErro!!\n");
								goto nCol;
							}
				}
				if(l == 1) {
					nCol2:
						printf("Informe um número para a linha %i coluna %i:\t", l, c);
						scanf("%i", &num[l][c]);
							if(num[l][c] == 0 || num[l][c] < 11 || num[l][c] > 21 ) {
								printf("\nErro!!\n");
								goto nCol2;
							}
				}
						
			}
		}
			
			inverteMatriz(num, l, c);
	
	system("pause");
}

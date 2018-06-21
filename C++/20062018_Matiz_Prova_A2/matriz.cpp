#include <stdio.h>
#include <locale.h>

main() {
	int num[4][4];
	int l, c, soma = 0, aux = 0;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(l=0;l<4;l++) {
		for(c=0;c<4;c++) {
			if(l==0 && c==0) {
				n1:
					printf("Informe um número para a linha %i coluna %i:\t", l+1, c+1);
					scanf("%i", &num[l][c]);	
						if(num[l][c] % 2 == 0 || (num[l][c] < 0 || num[l][c] > 63)) {
							printf("\nErro\n");
							goto n1;
						}
			}
			else {
				n2:
					printf("Informe um número para a linha %i coluna %i:\t", l+1, c+1);
					scanf("%i", &num[l][c]);	
						if(num[l][c] != aux + 2) {
							printf("\nErro\n");
							goto n2;
						}
			}
			aux = num[l][c];	
		}
	}
	
	for(l=0;l<4;l++) {
		for(c=0;c<4;c++) {
			printf("\t%i", num[l][c]);
		}
		printf("\n");
	}
	
	l=0;
	
	while(l<4) {
		for(c=3;c>=0;c--) {
			soma += num[l][c];
			l++;
		}
	}
	
	printf("soma é %i \n media é %i", soma, soma / 4);
	
	
}

/*
7) Escrever um nome e escrev�-lo de tr�s pra frente.
*/

#include <string.h>
#include <stdio.h>

main() {
	char nome[20];
	int i;
	
	printf("Informe um nome: ");
	gets(nome);
	
	for(i=strlen(nome)-1;i>=0;i--) {
		printf("\n%c", nome[i]);
	}
}

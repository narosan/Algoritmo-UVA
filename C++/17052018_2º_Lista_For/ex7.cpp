/*
7) Escrever um nome e escrevê-lo de trás pra frente.
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

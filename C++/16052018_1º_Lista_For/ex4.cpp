/*
4 – Fazer um programa para digitar um nome e exibi-lo tantas
 vezes quantos forem seus caracteres. Exemplo: um nome com 8 
 letras, terá a aparição do nome 8 vezes na tela.
*/

#include <stdio.h>
#include <string.h>

main() {
	int i;
	char nome[20];
	
	printf("Informe um nome : ");
	gets(nome);
	
	for(i=0;i<=strlen(nome)-1;i++) {
		printf("\n%s", nome);
	}
}

/*
2) Receber um nome no teclado e imprimir quantas letras “a” ou “A” tem o nome.
*/

#include <stdio.h>
#include <string.h>

main() {
	int i, a = 0;
	char nome[20];
	
	printf("Informe um nome: ");
	gets(nome);
	
	for(i=0;i<strlen(nome);i++) {
		if(nome[i] == 'a' || nome[i] == 'A') {
			a++;
		}
	}
	printf("Existem %i letras 'A' ou 'a'.", a);
}

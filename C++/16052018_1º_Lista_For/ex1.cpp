/*
1 - Fazer um programa para que o usuário possa digitar seu nome na tela 10 vezes. Um nome por linha.
*/

#include <stdio.h>
#include <string.h>

main() {
	char nome1[10];
	int i, n;
	
	for(i=1;i<=10;i++) {
		printf("Informe um seu nome: ");
		fflush(stdin);
		gets(nome1);
	}
}

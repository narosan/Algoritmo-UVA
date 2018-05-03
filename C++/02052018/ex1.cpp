/*
    1. Fazer um programa para que o usuário possa digitar uma palavra e imprimir as 4 primeiras letras da palavra.
*/

#include <stdio.h>
#include <string.h>

main(){
	char palavra[20];
	
	printf("Insira uma palavra: ");
	gets(palavra);
	
		printf("%c %c %c %c", palavra[0], palavra[1], palavra[2], palavra[3]);
	
	return 0;
}

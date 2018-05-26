/*
2 - Fazer um programa para digitar um nome com mais de 5 posições,
 calcule e mostre quantas letras tem. Para que o programa seja finalizado,
  basta digitar algo com menos de 4 letras
*/

#include <stdio.h>
#include <string.h>

main () {
	char nome[20];
	int i, tam = 10;
	
	while(tam>4) {
		printf("Informe um nome: ");
		fflush(stdin);
		gets(nome);
		tam = strlen(nome);
		printf("A palavra %s possui %i caracteres.\n", nome, tam-1);
	}
}

/*
3 - Fazer um programa para que o usu�rio digite um nome e exiba na tela
 apenas as letras que se encontram na posi��o par.
*/

#include <stdio.h>
#include <string.h>

main() {
	char nome[15];
	int i;
	
	printf("Informe um nome: ");
	gets(nome);
	
	for(i=0;i<=strlen(nome)-1;i+=2){
		printf("\n%c", nome[i]);
	}	
}

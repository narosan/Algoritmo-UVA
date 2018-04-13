/*
1) Fazer um programa para que o usuário digite três palavras. O
programa não pode permitir a entrada de palavras com a mesma
quantidade de caractere. Caso ocorro, Mensagem de erro e retornar
para a digitação daquela palavra.
Ao final o programa deverá exibir na tela o somatório dos caracteres
das três palavras digitadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra1[20], palavra2[20], palavra3[20];
	int soma;
	
	inicio:
		printf("Informe 3 palavras: ");
		gets(palavra1);
		gets(palavra2);
		gets(palavra3);
		
			if(strlen(palavra1) == strlen(palavra2) || strlen(palavra1) == strlen(palavra3) || strlen(palavra2) == strlen(palavra3)) {
				printf("\nNão é possivel ter palavras com o mesmo número de caracter.\n\n");
				goto inicio;
			}else {
				soma = strlen(palavra1) + strlen(palavra2) + strlen(palavra3);
				printf("%i", soma);
			}
	
	return 0;
}

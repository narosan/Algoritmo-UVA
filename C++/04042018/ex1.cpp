/*
1) Fazer um programa para que o usuário informe três palavras. As
palavras não podem ser repetidas. Caso aconteça, mensagem de erro e
retorna para nova digitação daquela informação. Ao final o programa
deverá concatenar as três palavras e exibir para o usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

	char palavra1[20], palavra2[20], palavra3[20];
		
	inicio:
		printf("Informe a primeira palavra: ");
		fflush(stdin);
		gets(palavra1);
		printf("Informe a segunda palavra: ");
		fflush(stdin);
		gets(palavra2);
		printf("Informe a terceira palavra: ");
		fflush(stdin);
		gets(palavra3);
		
			if(strcmp(palavra1,palavra2)==0 || strcmp(palavra1,palavra3)==0 || strcmp(palavra2,palavra3)==0){
				printf("\nExistem palavra iguais !!\nInsira novamente as palavras.\n\n");
				goto inicio;
			}else{
				strcat(palavra1,palavra2);
				strcat(palavra1,palavra3);
				
				printf("%s", palavra1);
			}
}


/*
    3. Fazer um programa para que o usu�rio possa digitar um nome e o programa dever� exibir a letra e a respectiva posi��o.
*/

#include <stdio.h>
#include <string.h>

main(){
	int i = 0;
	char nome[20];
	int num_char, posicao = 1;
	
	printf("Digite um nome: ");
	gets(nome);
	
	num_char = strlen(nome);
	
		while(i < num_char){
			printf("\n%c eh a %i letra.", nome[i], posicao);
			posicao++;
			i++;
		}
}

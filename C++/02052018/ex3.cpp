/*
    3. Fazer um programa para que o usuário possa digitar um nome e o programa deverá exibir a letra e a respectiva posição.
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

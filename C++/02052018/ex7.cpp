/*
    7. Fazer um programa para que o usu�rio digite uma palavra que tenha a quantidade de caracteres �mpares.
	Se for par, exibir mensagem de erro e retornar para nova digita��o.
*/

#include <stdio.h>
#include <string.h>

main(){
	int num_char, i = 0;
	char palavra[20];
	
	inicio:
		printf("Informe uma palavra: ");
		fflush(stdin);
		gets(palavra);
		
		num_char = strlen(palavra);
		
			if(num_char%2 == 0){
				printf("\nErro. numero de caracteres = par.\n");
				goto inicio;
			}else{
				printf("Palavra com %i caracteres.\nImpar.", num_char);
			}
			
	return 0;
			
}

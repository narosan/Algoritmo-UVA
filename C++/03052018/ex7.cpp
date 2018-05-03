/*
    7. Fazer um programa para que o usuário digite uma palavra de até 12 posições.
	Caso a palavra tenha mais do que 12 caracteres, mensagem de erro e retorna para nova digitação.
	O programa deverá apenas imprimir os caracteres com índice de valor ímpar.
*/

#include <stdio.h>
#include <string.h>

main(){
	char palavra[12];
	int num_char, i = 1;
	
	inicio:
		printf("Informe uma palavra: ");
		fflush(stdin);
		gets(palavra);
		
		num_char = strlen(palavra);
		
			if(num_char >= 12){
				
				printf("\n Erro !\n");
				goto inicio;
				
			}
			
		while(i <= num_char){
			
			printf("\n%c", palavra[i]);
			i += 2;
			
		}
		
	return 0;
}

/*
    8. Fazer um programa para que o usuário digite uma palavra de até 15 posições.
	Caso a palavra tenha menos do que 6 caracteres e mais do que 15 caracteres, 
	mensagem de erro e retorna para nova digitação.
	O programa deverá apenas imprimir os caracteres com índice de valor par.
	Ao final exibir a média dos índices pares computados.
*/

#include <stdio.h>
#include <string.h>

main(){
	int num_char, i = 0, soma, cont = 0, med = 0;
	char palavra[20];
	
		printf("Informe uma palavra: ");
		fflush(stdin);
		gets(palavra);
			
		num_char = strlen(palavra);
			
			while(num_char < 6 || num_char > 15){
				printf("Informe uma palavra: ");
				fflush(stdin);
				gets(palavra);
				
				num_char = strlen(palavra);
			}
			
			while(i <= num_char) {
				printf("%c", palavra[i]);
				soma += i;
				cont++;
				i += 2;
			}
			
		med = soma / cont;
		
		printf("\nExistem %i indices com valor par.\nA media desse inidices eh %i.\n", cont, med);
		
	return 0;
}

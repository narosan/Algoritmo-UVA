/*
    8. Fazer um programa para que o usu�rio digite uma palavra de at� 15 posi��es.
	Caso a palavra tenha menos do que 6 caracteres e mais do que 15 caracteres, 
	mensagem de erro e retorna para nova digita��o.
	O programa dever� apenas imprimir os caracteres com �ndice de valor par.
	Ao final exibir a m�dia dos �ndices pares computados.
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

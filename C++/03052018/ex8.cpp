/*
    8. Fazer um programa para que o usu�rio digite uma palavra de at� 15 posi��es.
	Caso a palavra tenha menos do que 6 caracteres e mais do que 15 caracteres, 
	mensagem de erro e retorna para nova digita��o.
	O programa dever� apenas imprimir os caracteres com �ndice de valor par.
	Ao final exibir a m�dia dos �ndices pares computados.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	
	system("color 2");
	
	int num_char, i = 0, soma = 0, cont = 0, med = 0;
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
			
			//num_char - 1 porque estava contando mais 1 indice
			while(i <= (num_char - 1)) {
				if(i%2 == 0){
					soma += i;
					cont++;
					printf("%c\n", palavra[i]);
				}
				i ++;
			}

		med = soma / cont;
		
		printf("Indices: \t %i\nSoma: \t %i\nMedia: \t %i", cont, soma, med);
		
	return 0;
}
			
	
		
		


/*
    8. Fazer um programa para que o usuário digite uma palavra de até 15 posições.
	Caso a palavra tenha menos do que 6 caracteres e mais do que 15 caracteres, 
	mensagem de erro e retorna para nova digitação.
	O programa deverá apenas imprimir os caracteres com índice de valor par.
	Ao final exibir a média dos índices pares computados.
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
			
	
		
		


/*
    8. O programa dever� exibir o caractere do meio da palavra digitada. 
	Para isso s� poder� ser aceiro palavras com n�meros �mpares de caracteres.
*/

#include <stdio.h>
#include <string.h>

main(){
	int num_char, i = 0, div = 0;
	char palavra[20];
	
	inicio:
		printf("Insira uma palavra: ");
		fflush(stdin);
		gets(palavra);
		
		num_char = strlen(palavra);
		
			if(num_char%2 == 0 || num_char >= 20) {
				printf("\n Erro! Informe a palavra novamente !\n");
				goto inicio;
			}else {
				div = num_char / 2;
				printf("\n%c eh o caracter do meio.\n", palavra[div]);
			}
			
	return 0;
}	

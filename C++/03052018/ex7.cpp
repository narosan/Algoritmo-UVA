/*
    7. Fazer um programa para que o usu�rio digite uma palavra de at� 12 posi��es.
	Caso a palavra tenha mais do que 12 caracteres, mensagem de erro e retorna para nova digita��o.
	O programa dever� apenas imprimir os caracteres com �ndice de valor �mpar.
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

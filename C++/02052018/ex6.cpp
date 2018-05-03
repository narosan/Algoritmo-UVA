/*
    6. Escrever um programa que receba um nome para que conte o número de vogais existentes nele.
	O programa deverá imprimir o número total de caracteres do nome, 
	quantas vogais e a respectiva porcentagem das vogais em relação ao total de caracteres.
*/

#include <stdio.h>
#include <string.h>

main(){
	int num_char, i = 0, vog = 0;
	char nome[20];
	
		printf("Informe um nome: ");
		gets(nome);
		
		num_char = strlen(nome);
		
			while(i <= num_char){
				if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){
					printf("%c\n", nome[i]);
					vog++;
				}
				i++;
			}
		
			
		
		printf("\nExistem %i caracteres no total.\n%i sao vogais.", num_char, vog);
	
	return 0;
}

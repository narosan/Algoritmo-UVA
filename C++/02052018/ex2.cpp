/*
    2. Fazer um programa para que o usu�rio possa digitar uma palavra e imprimir as 4 �ltimas letras da palavra
*/

#include <stdio.h>
#include <string.h>

main(){
	int i = 0, num;
	char palavra[20];
	
	printf("Insira uma palavra: ");
	gets(palavra);
	
	num = strlen(palavra);
	
		while(i <= 4){
			printf("%c\n", palavra[num]);
			num --;
			i++;
		}
		
	return 0;
}

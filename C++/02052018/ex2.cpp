/*
    2. Fazer um programa para que o usuário possa digitar uma palavra e imprimir as 4 últimas letras da palavra
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

/*
4) Fazer um programa para que o usuário possa inserir dois números. A
nova função a ser criada deverá exibir qual o maior número. Os números
informados não podem ser iguais. Fazer verificação, aplicar mensagem
de erro e retornar para nova digitação caso os valores sejam iguais.
*/

#include <stdio.h>
#include <stdlib.h>

int organizaNumeros(int num1, int num2){
	int maior, menor;
	
		if(num1>num2){
			maior = num1;
		}else{
			maior = num2;
		}
		
		if(num1<num2){
			menor = num1;
		}else{
			menor = num2;
		}
		
	printf("O maior numero eh %i\nO menor numero eh %i\n", maior, menor);
	
	return 0;
}

main(){
	int num1, num2;
	
	inicio:
		printf("Insira 2 numeros: \n");
		scanf("%i %i", &num1, &num2);
		
			if(num1==num2){
				printf("\nNumeros iguais, digite novamente.\n");
				goto inicio;
			}
			
		organizaNumeros(num1, num2);
		
	return 0;
}

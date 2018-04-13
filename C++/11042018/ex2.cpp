/*
2) Faça um programa para criar uma função que recebe dois números inteiros e
retorna a soma dos números entre eles.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma(int num, int num2){
	printf("O resultado de %i + %i é %i", num, num2, num+num2);
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, num2;
	
	printf("Informe 2 números para soma:\n");
	scanf("%i %i", &num, &num2);
	
		soma(num, num2);
	
	return 0;
}

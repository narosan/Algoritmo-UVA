/*
2) Fa�a um programa para criar uma fun��o que recebe dois n�meros inteiros e
retorna a soma dos n�meros entre eles.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma(int num, int num2){
	printf("O resultado de %i + %i � %i", num, num2, num+num2);
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, num2;
	
	printf("Informe 2 n�meros para soma:\n");
	scanf("%i %i", &num, &num2);
	
		soma(num, num2);
	
	return 0;
}

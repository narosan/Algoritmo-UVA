/* 01) Fa�a um programa para que o usu�rio informe tr�s n�meros. O
programa dever� calcular a media aritm�tica destes tr�s n�meros e
exibir o resultado em uma mensagem. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, numero3, resultado;
	
	setlocale(LC_ALL,"Portuguese");
	printf("************ ESSE PROGRAMA CALCULA A MEDIA ARITM�TICA DE 3 N�MEROS ************\n\n");
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &numero1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &numero2);
	printf("Informe o terceiro n�mero: ");
	scanf("%i", &numero3);
	
	resultado = (numero1+numero2+numero3)/3;
	
	printf("O resultado da divis�o � %i.", resultado);
	
	return 0;
}

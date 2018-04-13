/* 01) Faça um programa para que o usuário informe três números. O
programa deverá calcular a media aritmética destes três números e
exibir o resultado em uma mensagem. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, numero3, resultado;
	
	setlocale(LC_ALL,"Portuguese");
	printf("************ ESSE PROGRAMA CALCULA A MEDIA ARITMÉTICA DE 3 NÚMEROS ************\n\n");
	printf("Informe o primeiro número: ");
	scanf("%i", &numero1);
	printf("Informe o segundo número: ");
	scanf("%i", &numero2);
	printf("Informe o terceiro número: ");
	scanf("%i", &numero3);
	
	resultado = (numero1+numero2+numero3)/3;
	
	printf("O resultado da divisão é %i.", resultado);
	
	return 0;
}

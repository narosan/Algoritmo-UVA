/*
06) Fa�a um programa para que o usu�rio informe dois n�meros e o
programa dever� executar a troca destes valores entre eles.
Exemplo: o valor de n1 dever� ir para o n2 e o valor de n2 dever� ir
para o n1. Exibir os valores invertidos em duas mensagens.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	int numero1, numero2, aux;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o 1� n�mero: ");
	scanf("%i", &numero1);
	printf("Informe o 2� n�mero: ");
	scanf("%i", &numero2);
	
	aux = numero1;
	numero1 = numero2;
	numero2 = aux;
	
	printf("Seu 1� n�mero agora �: %i\nE seu 2� n�mero �: %i", numero1, numero2);
	
	return 0;
}

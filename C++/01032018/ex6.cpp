/*
06) Faça um programa para que o usuário informe dois números e o
programa deverá executar a troca destes valores entre eles.
Exemplo: o valor de n1 deverá ir para o n2 e o valor de n2 deverá ir
para o n1. Exibir os valores invertidos em duas mensagens.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	int numero1, numero2, aux;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o 1º número: ");
	scanf("%i", &numero1);
	printf("Informe o 2º número: ");
	scanf("%i", &numero2);
	
	aux = numero1;
	numero1 = numero2;
	numero2 = aux;
	
	printf("Seu 1º número agora é: %i\nE seu 2º número é: %i", numero1, numero2);
	
	return 0;
}

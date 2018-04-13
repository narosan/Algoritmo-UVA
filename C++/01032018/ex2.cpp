/*02) Faça um programa para que o usuário informe três números. O
programa deverá calcular o produto dos dois números informados.
Exibir o resultado em uma mensagem.
Fórmula: n1 * n2*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, produto;
	
	setlocale(LC_ALL,"Portuguese");

	printf("************ ESSE PROGRAMA CALCULA O PRODUTO DE 2 NÚMEROS ************\n\n");
	printf("Informe o número 1: ");
	scanf("%i", &numero1);
	printf("Informe o número 2: ");
	scanf("%i", &numero2);
	
	produto = numero1 * numero2;
	
	printf("O Produto de %i * %i é %i.", numero1, numero2, produto);
	
	return 0;
}

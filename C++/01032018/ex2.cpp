/*02) Fa�a um programa para que o usu�rio informe tr�s n�meros. O
programa dever� calcular o produto dos dois n�meros informados.
Exibir o resultado em uma mensagem.
F�rmula: n1 * n2*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, produto;
	
	setlocale(LC_ALL,"Portuguese");

	printf("************ ESSE PROGRAMA CALCULA O PRODUTO DE 2 N�MEROS ************\n\n");
	printf("Informe o n�mero 1: ");
	scanf("%i", &numero1);
	printf("Informe o n�mero 2: ");
	scanf("%i", &numero2);
	
	produto = numero1 * numero2;
	
	printf("O Produto de %i * %i � %i.", numero1, numero2, produto);
	
	return 0;
}

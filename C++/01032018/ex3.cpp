/*03) Fa�a um programa para que o usu�rio informe dois n�meros. O
programa dever� calcular a divis�o entre esses dois n�meros e
calcular o resto da divis�o. Exibir o resultado do resto da divis�o
em uma mensagem.
F�rmula:
 q = x / y;
 r = x - y * q;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, div, resto;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("************ ESSE PROGRAMA CALCULA A DIVIS�O E O RESTO DELA ************\n\n");
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &numero1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &numero2);
	
	div = numero1 / numero2;
	resto = numero1 % numero2;
	
	printf("A divis�o � : %i\nO resto da divis�o � : %i", div, resto);
	
	return 0;
}

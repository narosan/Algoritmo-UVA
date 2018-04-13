/*03) Faça um programa para que o usuário informe dois números. O
programa deverá calcular a divisão entre esses dois números e
calcular o resto da divisão. Exibir o resultado do resto da divisão
em uma mensagem.
Fórmula:
 q = x / y;
 r = x - y * q;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int numero1, numero2, div, resto;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("************ ESSE PROGRAMA CALCULA A DIVISÃO E O RESTO DELA ************\n\n");
	printf("Informe o primeiro número: ");
	scanf("%i", &numero1);
	printf("Informe o segundo número: ");
	scanf("%i", &numero2);
	
	div = numero1 / numero2;
	resto = numero1 % numero2;
	
	printf("A divisão é : %i\nO resto da divisão é : %i", div, resto);
	
	return 0;
}

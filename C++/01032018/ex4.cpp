/*04) Fa�a um programa para que o usu�rio informe dois n�meros. O
programa dever� calcular a soma destes n�meros e depois calcular
a diferen�a entre eles. Exibir os resultados da soma e da subtra��o
em uma �nica mensagem. Os valores informados dever�o aparecer
na mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float numero1, numero2, soma, subtracao;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("************ ESSE PROGRAMA CALCULA A SOMA E A SUBTRA��O DE 2 N�MEROS ************\n\n");
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &numero1);
	printf("Informe o segundo n�mero: ");
	scanf("%f", &numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	
	printf("A soma � : %.1f\nA subtra��o � : %.1f", soma, subtracao);
	
	return 0;
}



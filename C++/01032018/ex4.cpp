/*04) Faça um programa para que o usuário informe dois números. O
programa deverá calcular a soma destes números e depois calcular
a diferença entre eles. Exibir os resultados da soma e da subtração
em uma única mensagem. Os valores informados deverão aparecer
na mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float numero1, numero2, soma, subtracao;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("************ ESSE PROGRAMA CALCULA A SOMA E A SUBTRAÇÃO DE 2 NÚMEROS ************\n\n");
	
	printf("Informe o primeiro número: ");
	scanf("%f", &numero1);
	printf("Informe o segundo número: ");
	scanf("%f", &numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	
	printf("A soma é : %.1f\nA subtração é : %.1f", soma, subtracao);
	
	return 0;
}



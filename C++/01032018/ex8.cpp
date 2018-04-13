/*
08) Faça um programa para que o usuário informe o valor do dólar,
o valor da taxa de conversão e o programa deverá converter o valor
do dólar informado em um valor em real. Exibir o valor do real
obtido em uma mensagem.
Fórmula: real = dolar * taxa;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float dolar, taxa, real;
		
	setlocale(LC_ALL,"Portuguese");
	printf("************ ESSE PROGRAMA CALCULA O VALOR DO DOLLAR E TRANSFORMA EM REAL ************\n\n");
	
	printf("Informe a quantidade de dóllares : ");
	scanf("%f", &dolar);
	printf("Informe o valor da taxa : ");
	scanf("%f", &taxa);
	
	real = dolar * taxa;
	
	printf("O valor de %.2f dolares é = a %.2f reais.", dolar, real);
	
	return 0;
}

/*
08) Fa�a um programa para que o usu�rio informe o valor do d�lar,
o valor da taxa de convers�o e o programa dever� converter o valor
do d�lar informado em um valor em real. Exibir o valor do real
obtido em uma mensagem.
F�rmula: real = dolar * taxa;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float dolar, taxa, real;
		
	setlocale(LC_ALL,"Portuguese");
	printf("************ ESSE PROGRAMA CALCULA O VALOR DO DOLLAR E TRANSFORMA EM REAL ************\n\n");
	
	printf("Informe a quantidade de d�llares : ");
	scanf("%f", &dolar);
	printf("Informe o valor da taxa : ");
	scanf("%f", &taxa);
	
	real = dolar * taxa;
	
	printf("O valor de %.2f dolares � = a %.2f reais.", dolar, real);
	
	return 0;
}

/*
07) Fa�a um programa para que o usu�rio informe o valor do
empr�stimo, o percentual da taxa e o tempo que ir� querer pagar. O
programa dever� calcular a presta��o a ser paga. Exibir os valores
invertidos em uma mensagem.
F�rmula: prestacao = valor + (valor * (taxa / 100) * tempo);
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculoPrestacao(int valor, int taxa, int tempo){
	int prestacao;
	
	prestacao = valor+(valor*(taxa/100)*tempo);
	
	printf("presta��o = %i ", prestacao);
}

main(){
	int valor, taxa, tempo;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe valor: ");
	scanf("%i", &valor);
	printf("Informe taxa: ");
	scanf("%i", &taxa);
	printf("Informe tempo: ");
	scanf("%i", &tempo);
	
	
	calculoPrestacao(valor,taxa,tempo);
	
	return 0;
}

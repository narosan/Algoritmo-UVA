/*
07) Faça um programa para que o usuário informe o valor do
empréstimo, o percentual da taxa e o tempo que irá querer pagar. O
programa deverá calcular a prestação a ser paga. Exibir os valores
invertidos em uma mensagem.
Fórmula: prestacao = valor + (valor * (taxa / 100) * tempo);
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculoPrestacao(int valor, int taxa, int tempo){
	int prestacao;
	
	prestacao = valor+(valor*(taxa/100)*tempo);
	
	printf("prestação = %i ", prestacao);
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

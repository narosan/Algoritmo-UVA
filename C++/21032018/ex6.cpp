/*
6) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa verifique se os n�meros podem ser os lados de um
tri�ngulo. Exibir mensagem.
*/


#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int lado1, lado2, lado3;
	
	printf("Insira o valor dos 3 lados de um tri�ngulo: \n");
	scanf("%i", &lado1);
	scanf("%i", &lado2);
	scanf("%i", &lado3);
	
				if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
					printf("Isso � um tri�ngulo.");
				}else{
					printf("Isso n�o � um tri�ngulo.");
				}
				
	return 0;
	
}

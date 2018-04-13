/*
6) Fazer um programa para que o usuário digite três números e o
programa verifique se os números podem ser os lados de um
triângulo. Exibir mensagem.
*/


#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int lado1, lado2, lado3;
	
	printf("Insira o valor dos 3 lados de um triângulo: \n");
	scanf("%i", &lado1);
	scanf("%i", &lado2);
	scanf("%i", &lado3);
	
				if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
					printf("Isso é um triângulo.");
				}else{
					printf("Isso não é um triângulo.");
				}
				
	return 0;
	
}

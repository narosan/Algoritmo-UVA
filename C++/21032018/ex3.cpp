/*
3) Fazer um programa para que o usu�rio digite um n�mero e o
programa verifique se o n�mero � m�ltiplo de 5. Exibir mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int numero;
	
	scanf("%i", &numero);
	
	if(numero%5==0){
		printf("Esse n�mero � m�ltiplo de 5.");
	}else{
		printf("N�o � m�ltiplo de 5.");
	}
	
	return 0;
}

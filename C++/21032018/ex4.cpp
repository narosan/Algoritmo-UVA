/*
4) Fazer um programa para que o usu�rio digite um n�mero e o
programa verifique se o n�mero � m�ltiplo de 3 e 7. Exibir
mensagem.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	scanf("%i", &numero);
	
				if(numero%3==0 && numero%7==0){
					printf("Esse n�mero � divisivel por 3 e 7.");
				}else{
					printf("Esse n�mero n�o � divisivel por 3 e 7.");
				}
				
	return 0;
}

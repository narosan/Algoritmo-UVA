/*
5) Fazer um programa para que o usu�rio digite um n�mero e o
programa verifique se o n�mero � m�ltiplo de 2 ou de 5 ou de 10.
Exibir mensagem.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int numero;
	
	scanf("%i", &numero);
	
				if(numero%2==0 || numero%5==0 || numero%10==0){
					printf("Esse n�mero � divisivel por 2, 5 ou 10.");
				}else{
					printf("Esse n�mero n�o � divisivel por 2, 5 ou 10.");
				}
				
	return 0;
}

/*
7) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa verifique se os n�meros s�o iguais. Exibir mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2, numero3;
	
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	scanf("%i", &numero3);
	
				if(numero1==numero2 && numero2==numero3){
					printf("N�meros iguais.");
				}else{
					printf("N�meros diferentes.");
				}
				
	return 0;
}

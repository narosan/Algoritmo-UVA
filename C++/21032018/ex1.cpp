/*
1) Fazer um programa para que o usu�rio digite dois n�meros e o
programa verifique se os n�meros s�o ou n�o iguais. Exibir
mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2;
	
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	
				if(numero1==numero2)
				{
					printf("N�meros iguais.");
				}
				if(numero1!=numero2){
					printf("N�meros diferentes.");
				}
				
	return 0;
}


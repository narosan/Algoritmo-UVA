/*
2) Fazer um programa para que o usu�rio digite um n�mero e o
programa verifique se os n�meros est�o entre o intervalo de valores
de 10 e 20. Exibir mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	scanf("%i", &numero);
	
				if(numero<=20 && numero>=10){
					printf("N�mero est� entre 10 e 20.");
				}else{
					printf("N�o est� entre 10 e 20.");
				}
				
	return 0;
}

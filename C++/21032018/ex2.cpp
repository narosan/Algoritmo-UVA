/*
2) Fazer um programa para que o usuário digite um número e o
programa verifique se os números estão entre o intervalo de valores
de 10 e 20. Exibir mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	scanf("%i", &numero);
	
				if(numero<=20 && numero>=10){
					printf("Número está entre 10 e 20.");
				}else{
					printf("Não está entre 10 e 20.");
				}
				
	return 0;
}

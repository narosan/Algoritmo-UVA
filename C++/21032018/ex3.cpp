/*
3) Fazer um programa para que o usuário digite um número e o
programa verifique se o número é múltiplo de 5. Exibir mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int numero;
	
	scanf("%i", &numero);
	
	if(numero%5==0){
		printf("Esse número é múltiplo de 5.");
	}else{
		printf("Não é múltiplo de 5.");
	}
	
	return 0;
}

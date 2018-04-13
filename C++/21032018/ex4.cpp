/*
4) Fazer um programa para que o usuário digite um número e o
programa verifique se o número é múltiplo de 3 e 7. Exibir
mensagem.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	scanf("%i", &numero);
	
				if(numero%3==0 && numero%7==0){
					printf("Esse número é divisivel por 3 e 7.");
				}else{
					printf("Esse número não é divisivel por 3 e 7.");
				}
				
	return 0;
}

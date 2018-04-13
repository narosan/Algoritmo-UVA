/*
5) Fazer um programa para que o usuário digite um número e o
programa verifique se o número é múltiplo de 2 ou de 5 ou de 10.
Exibir mensagem.

*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int numero;
	
	scanf("%i", &numero);
	
				if(numero%2==0 || numero%5==0 || numero%10==0){
					printf("Esse número é divisivel por 2, 5 ou 10.");
				}else{
					printf("Esse número não é divisivel por 2, 5 ou 10.");
				}
				
	return 0;
}

/*
1) Fazer um programa para que o usuário digite três números e o
programa deverá verificar qual é o maior número. Exibir mensagem
com o maior número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int numero1=0, numero2=0, numero3=0;
	
	printf("Informe 3 números : \n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	scanf("%i", &numero3);
	
		if(numero1>numero2 && numero1>numero3){
			printf("%i é o maior número.", numero1);
		}else if(numero2>numero1 && numero2>numero3){
			printf("%i é o maior número.", numero2);
		}else if(numero3>numero1 && numero3>numero2){
			printf("%i é o maior número.", numero3);
		}else {
			printf("Números iguais");
		}
	return 0;
}


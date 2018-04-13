/*
7) Fazer um programa para que o usuário digite três números e o
programa verifique se os números são iguais. Exibir mensagem.
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
					printf("Números iguais.");
				}else{
					printf("Números diferentes.");
				}
				
	return 0;
}

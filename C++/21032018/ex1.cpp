/*
1) Fazer um programa para que o usuário digite dois números e o
programa verifique se os números são ou não iguais. Exibir
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
					printf("Números iguais.");
				}
				if(numero1!=numero2){
					printf("Números diferentes.");
				}
				
	return 0;
}


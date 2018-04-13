/*
6) Fazer um programa para que o usuário digite três números e o
programa verifique se os números são diferentes. O programa não
pode permitir que os valores digitados sejam iguais. Caso aconteça,
mensagem de erro e retornar para nova digitação.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2, numero3;
	
	inicio:
		
	printf("Informe 3 números: \n");
	scanf("%i %i %i", &numero1, &numero2, &numero3);
	
		if(numero1==numero2 && numero2==numero3){
			printf("Não é possivel ter números iguais.\n");
			goto inicio;
		}else{
			printf("Os números digitados são %i, %i, %i.", numero1, numero2, numero3);
		}
		
	return 0;
}

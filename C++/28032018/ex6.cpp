/*
6) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa verifique se os n�meros s�o diferentes. O programa n�o
pode permitir que os valores digitados sejam iguais. Caso aconte�a,
mensagem de erro e retornar para nova digita��o.
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2, numero3;
	
	inicio:
		
	printf("Informe 3 n�meros: \n");
	scanf("%i %i %i", &numero1, &numero2, &numero3);
	
		if(numero1==numero2 && numero2==numero3){
			printf("N�o � possivel ter n�meros iguais.\n");
			goto inicio;
		}else{
			printf("Os n�meros digitados s�o %i, %i, %i.", numero1, numero2, numero3);
		}
		
	return 0;
}

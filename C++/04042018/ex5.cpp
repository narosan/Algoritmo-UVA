/*
5) Fazer um programa para que o usu�rio possa inserir tr�s n�meros. A
nova fun��o a ser criada dever� retornar o menor valor. Os n�meros
informados n�o podem ser iguais. Fazer verifica��o, aplicar mensagem
de erro e retornar para nova digita��o caso os valores sejam iguais.
*/

#include <stdio.h>
#include <stdlib.h>

int menorValor(int n1, int n2, int n3){
	int menor;
	
	if(n1<n2 && n1<n3){
		menor = n1;
	}else if(n2<n1 && n2<n3){
		menor = n2;
	}else{
		menor = n3;
	}
	
	printf("O menor numero eh %i", menor);
	
	return 0;
}

main(){
	
	int n1, n2, n3;
	
	inicio:
		printf("Informe 3 numeros.\n");
		scanf("%i %i %i", &n1, &n2, &n3);
		
			if(n1==n2 || n1==n3 || n2==n3){
				printf("Existem numeros iguais! \n");
				goto inicio;
			}
			
		menorValor(n1,n2,n3);
		
	return 0;		
}

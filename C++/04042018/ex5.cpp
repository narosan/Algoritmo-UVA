/*
5) Fazer um programa para que o usuário possa inserir três números. A
nova função a ser criada deverá retornar o menor valor. Os números
informados não podem ser iguais. Fazer verificação, aplicar mensagem
de erro e retornar para nova digitação caso os valores sejam iguais.
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

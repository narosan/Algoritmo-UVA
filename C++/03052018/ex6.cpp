/*
    6. Fazer um programa que pergunta um n�mero ao usu�rio, e mostra sua tabuada completa (de 1 at� 10).
	O n�mero digitado n�o pode ser zero. Caso seja, mensagem de erro e retorna para nova digita��o.
*/

#include <stdio.h>

main() {
	int num, i = 1;
	
	inicio:
		printf("Informe um numero: ");
		scanf("%i", &num);
		
		if(num <= 0){
			printf("\n Erro !\n");
			goto inicio;
		}
		
		while(i <= 10){
			printf("\n %i * %i = %i", num, i, num * i);
			i++;
		}
		
	return 0;
}


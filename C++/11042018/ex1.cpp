/*
1) Fazer um programa para criar uma fun��o que retorne um valor para identificar
que tipo de n�mero inteiro o usu�rio digitou. Ser� necess�rio exibir na tela a
mensagem:
N�mero Par, caso o usu�rio tenha digitado um n�mero par na fun��o
principal;
N�mero �mpar, caso o usu�rio tenha digitado um n�mero �mpar na fun��o
principal;
N�mero Negativo, caso o usu�rio tenha digitado um n�mero negativo na
fun��o principal.
Caso seja digitado um valor zero, este deve ser criticado e o programa dever�
retornar para nova digita��o.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int tipoNumero(int num){
	if(num<0){
		printf("O n�mero %i � negativo.", num);
	}else {
		if(num%2==0){
			printf("O n�mero %i � par.", num);
		}else{
			printf("O n�mero %i � impar.", num);
		}
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	inicio:
		printf("Informe um n�mero: ");
		scanf("%i", &num);
	
		if(num==0){
			printf("\nN�mero n�o pode ser igual a 0 !!\n\n");
			goto inicio;	
		}else {
			tipoNumero(num);
		}
		
	return 0;
}

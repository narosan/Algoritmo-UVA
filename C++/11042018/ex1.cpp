/*
1) Fazer um programa para criar uma função que retorne um valor para identificar
que tipo de número inteiro o usuário digitou. Será necessário exibir na tela a
mensagem:
Número Par, caso o usuário tenha digitado um número par na função
principal;
Número Ímpar, caso o usuário tenha digitado um número ímpar na função
principal;
Número Negativo, caso o usuário tenha digitado um número negativo na
função principal.
Caso seja digitado um valor zero, este deve ser criticado e o programa deverá
retornar para nova digitação.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int tipoNumero(int num){
	if(num<0){
		printf("O número %i é negativo.", num);
	}else {
		if(num%2==0){
			printf("O número %i é par.", num);
		}else{
			printf("O número %i é impar.", num);
		}
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	inicio:
		printf("Informe um número: ");
		scanf("%i", &num);
	
		if(num==0){
			printf("\nNúmero não pode ser igual a 0 !!\n\n");
			goto inicio;	
		}else {
			tipoNumero(num);
		}
		
	return 0;
}

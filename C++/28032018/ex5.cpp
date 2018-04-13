/*
5) Fazer um programa para que o usuário digite um número e o
programa verifique se o número é múltiplo de 2 ou de 5 ou de 10.
Exibir mensagem de erro caso o número digitado não seja múltiplo
de nenhum destes. O programa não poderá permitir que o número
zero seja digitado, nem negativo e nem maior do que 100. Caso
ocorra, mensagem de erro e retornar para nova digitação.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	inicio:
	
	printf("Informe um número: ");
	scanf("%i", &numero);
	
		if(numero<=0 || numero>100){
			printf("Não é possivel ter números a baixo de 0 ou a cima de 100.");
			goto inicio;
		}else{
			if(numero%2==0 && numero%5==0 && numero%10==0){
				printf("%i é multiplo de 2, 5 e 10.", numero);
			}else{
				printf("%i não é multiplo de 2, 5 e 10.", numero);
			}
		}
		
	return 0;
}

/*
4) Fazer um programa para que o usuário digite dois números e o
programa verifique se o número é múltiplo de 2 e 4. Exibir
mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	inicio:
	printf("Informe um número: ");
	scanf("%i", &numero);
	
	if(numero%2==0 && numero%4==0){
		printf("%i é multiplo de 2 e 4.", numero);
	}else{
		printf("Número não é multiplo por 2 e 4.\n\n Digite Novamente\n\n");
		goto inicio;
	}
	
	return 0;
}

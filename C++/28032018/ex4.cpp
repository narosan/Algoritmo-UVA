/*
4) Fazer um programa para que o usu�rio digite dois n�meros e o
programa verifique se o n�mero � m�ltiplo de 2 e 4. Exibir
mensagem.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	inicio:
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
	if(numero%2==0 && numero%4==0){
		printf("%i � multiplo de 2 e 4.", numero);
	}else{
		printf("N�mero n�o � multiplo por 2 e 4.\n\n Digite Novamente\n\n");
		goto inicio;
	}
	
	return 0;
}

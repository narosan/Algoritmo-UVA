/*
6) Fazer uma nova fun��o que recebe um valor inteiro e verifica se o valor �
positivo ou negativo. Exibir a mensagem dizendo se o n�mero � positivo ou
negativo.
*/

#include <stdio.h>
#include <locale.h>

int verificaNum(int num){
	if(num<0){
		printf("Esse n�mero � negativo.");
	}else if(num>0){
		printf("Esse n�mero � posit�vo.");
	}else{
		printf("O n�mero � 0.");
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Informe um n�mero: ");
	scanf("%i", &num);
	
		verificaNum(num);
		
	return 0;
}

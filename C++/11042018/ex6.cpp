/*
6) Fazer uma nova função que recebe um valor inteiro e verifica se o valor é
positivo ou negativo. Exibir a mensagem dizendo se o número é positivo ou
negativo.
*/

#include <stdio.h>
#include <locale.h>

int verificaNum(int num){
	if(num<0){
		printf("Esse número é negativo.");
	}else if(num>0){
		printf("Esse número é positívo.");
	}else{
		printf("O número é 0.");
	}
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Informe um número: ");
	scanf("%i", &num);
	
		verificaNum(num);
		
	return 0;
}

/*
2) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa dever� verificar qual � o n�mero do meio. Exibir
mensagem com o n�mero. O programa n�o poder� aceitar valor zero
para nenhum dos tr�s n�meros. Criticar, dar mensagem de erro e
retornar para nova digita��o daquele n�mero err�neo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1=0, numero2=0, numero3=0;	
	
	printf("Informe 3 n�meros.\n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	scanf("%i", &numero3);
	
		if(numero1>numero2 && numero1<numero3 || numero1>numero3 && numero1<numero2){
			printf("%i � o n�mero intermedi�rio.", numero1);
		}
		else if(numero2>numero1 && numero2<numero3 || numero2>numero3 && numero2<numero1){
			printf("%i � o n�mero intermedi�rio.", numero2);
		}
		else if(numero3>numero1 && numero3<numero2 || numero3>numero2 && numero3<numero1){
			printf("%i � o n�mero intermedi�rio.", numero3);
		}
		else{
			printf("N�meros iguais.");
		}
	return 0;
}

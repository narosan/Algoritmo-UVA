/*
3) Fazer um programa para que o usu�rio digite dois n�meros. Fazer
a m�dia destes dois n�meros. O programa dever� verificar se a m�dia
dos n�meros est� entre o intervalo de valores de 15 e 37. Exibir
mensagem �Valor V�lido� para caso o n�mero esteja de acordo. Caso
negativo, exibir mensagem �N�mero Inv�lido�. Os n�meros digitados
n�o podem ser negativos. Caso sejam, exibir mensagem de erro e
retornar para nova digita��o daquele n�mero err�neo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1=0, numero2=0, med;
	
	inicio:
	printf("Informe 2 n�meros :\n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	
	med = (numero1 + numero2) / 2;
	
		if(numero1<0 || numero2<0){
			printf("N�o � possivel ter n�meros a baixo de 0.\n\n");
			goto inicio;
		}else{
			if(med>=15 && med<=37){
				printf("Sua m�dia %i � v�lida.", med);
			}else{
				printf("M�dia %i inv�lida.", med);
			}
		}
			
	return 0;
}

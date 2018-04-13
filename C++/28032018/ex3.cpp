/*
3) Fazer um programa para que o usuário digite dois números. Fazer
a média destes dois números. O programa deverá verificar se a média
dos números está entre o intervalo de valores de 15 e 37. Exibir
mensagem “Valor Válido” para caso o número esteja de acordo. Caso
negativo, exibir mensagem “Número Inválido”. Os números digitados
não podem ser negativos. Caso sejam, exibir mensagem de erro e
retornar para nova digitação daquele número errôneo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1=0, numero2=0, med;
	
	inicio:
	printf("Informe 2 números :\n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	
	med = (numero1 + numero2) / 2;
	
		if(numero1<0 || numero2<0){
			printf("Não é possivel ter números a baixo de 0.\n\n");
			goto inicio;
		}else{
			if(med>=15 && med<=37){
				printf("Sua média %i é válida.", med);
			}else{
				printf("Média %i inválida.", med);
			}
		}
			
	return 0;
}

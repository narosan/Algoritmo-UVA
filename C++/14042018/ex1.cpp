/*
1. Fazer um programa para calculo de dabuada.
O usuario devera informar um valor inicial
e um valor final, os valores não podem ser zero, negativos 
e nem o segundo valor menor que o primeiro caso aconteça,
mensagem de erro para retorno da digitação
o usuario tambem ira inforamr ate qual valor o calculo sera
feito este valor pode ser negativo, zero e nem maior que 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
	system("color 0c");
	setlocale(LC_ALL,"Portuguese");
	
	int num1 = 0, num2 = 0, calc = 0, i = 0, cont = 0, soma = 0;
	
	n1:
		printf("Informe um número: ");
		scanf("%i", &num1);
			if(num1 <= 0){
				system("cls");
				goto n1;
			}
	n2:
		printf("Informe até qual número deseja calcular: ");
		scanf("%i", &num2);
			if(num2 < num1 || num2 <= 0){
				system("cls");
				goto n2;
			}
	cal:
		printf("Informe em quantas vezes seu primeiro número vai ser calculado:");
		scanf("%i", &calc);
			if(calc <= 0 || calc > 10){
				printf("\n\tErro!!\n");
				system("cls");
				goto cal;
			}
			
		while(num1 <= num2){
			cont = 0;
				while(cont<=calc){
					printf("\t|%i * %i = %i|", num1, cont, num1*cont);
					cont++;
				}
			printf("\n");
			num1++;
		}
		
	return 0;
}

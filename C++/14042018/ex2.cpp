/*
2. Fazer um programa para que o usuario informe um numero inicial
 e um final os valores nao podem ser zero negativos e nem o segundo 
 inferior ou igual ao primeiro o programa devera executar em ordem 
 decrescente e verificar  os numero multiplos de 3 e 8 
 é preciso quantificar quantos sao os numeros multiplos de 3 e 8
 em uma nova função 
 verificar qual é o maior quantitativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


main(){
	system("color 0c");
	setlocale(LC_ALL,"Portuguese");
	
	int num1 = 0, num2 = 0, cont = 0, maior = 0, aux = 0;
	
	n1:
		printf("Informe o primeiro número: ");
		scanf("%i", &num1);
			if(num1 <= 0){
				system("cls");
				goto n1;
			}
	n2:
		printf("Informe o segundo número: ");
		scanf("%i", &num2);
			if(num2 < num1 || num2 <= 0){
				system("cls");
				goto n2;
			}
		
		while(num2 > num1){
				if(num2%3==0 && num2%8==0){
					cont++;
						if(num2 > aux){
							aux = num2;
						}
					//maior =	maiorNumero(num2);
				}
			num2--;
		}
		
		printf("A quantidade dos números multiplos de 3 e 8 é %i\nO maior multiplo é %i", cont, aux);
		
}

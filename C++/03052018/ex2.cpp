/*
    2. Fazer um programa que mostre todos os n�meros pares de 1 at� 100 em prdem decrescente.
*/

#include <stdio.h>

main() {
	int num = 100;
	
		while(num >= 1){
			printf("%i\n", num);
			num -= 2;
		}
		
	return 0;
}

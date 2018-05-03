/*
    2. Fazer um programa que mostre todos os números pares de 1 até 100 em prdem decrescente.
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

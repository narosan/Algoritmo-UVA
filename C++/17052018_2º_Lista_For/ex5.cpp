/*
5) Escrever um programa que leia, valores inteiros, 
até ser lido o valor -99. Quando isso acontecer o programa
 deverá escrever a soma e a média dos valores lidos.
*/

#include <stdio.h>

main() {
	int num=0, cont=0, soma=0;
	
	while(num != -99) {
		soma += num;
		cont ++;
		scanf("%i", &num);
	}
	printf("Soma\t\t%i\nMedia\t\t%i", soma, soma / cont);
}

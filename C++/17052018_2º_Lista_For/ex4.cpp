/*
4) Exibir o total do somat�rio, a m�dia e o total de valores lidos.
 O programa deve fazer as leituras dos valores enquanto o usu�rio
 estiver fornecendo valores positivos. Ou seja, o programa deve parar
  quando o usu�rio fornecer um valor negativo.
*/

#include <stdio.h>

main() {
	int num = 0, soma = 0, cont = 0;
	
	while(num>=0) {
		printf("Informe um numero: ");
		scanf("%i", &num);
			if(num > 0) {
				soma += num;
				cont ++;
			}
	}
	
	printf("\n|Soma\t\t\t%i\n|Total Val Lidos\t%i\n|Media\t\t\t%i", soma, cont, soma / cont);
}

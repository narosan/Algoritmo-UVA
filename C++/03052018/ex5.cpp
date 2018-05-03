/*
    5. Fazer um programa que solicite 10 números ao usuário,
	através de um “while”, e ao final mostre os dois maiores números digitados pelo usuário.
*/

#include <stdio.h>

main() {
	int aux = 1,i = 0, maior = 0, menor = 0, num[20];
	
		printf("Informe um numero: ");
		scanf("%i", &num[i]);
		
		menor = num[i];
		maior = num[i];
		
		while(aux < 10){
			i++;
				printf("Informe um numero: ");
				scanf("%i", &num[i]);
						
					if(num[i] > maior) {
						
						maior = num[i];
						
					}
					
					if(num[i] < menor) {
						menor = num[i];
					}
					
											
			aux++;			
		}
		
		printf("O maior numero eh %i\nO menor numero eh %i.", maior, menor);
	
	return 0;
}

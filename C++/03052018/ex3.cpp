/*
    3. Fazer um programa que recebe um n�mero inteiro qualquer e mostre os n�meros pares e �mpares (separados, em duas colunas),
	de 1 at� esse n�mero inteiro.
	O n�mero digitado n�o pode ser zero e nem negativo. Caso seja, mensagem de erro e retorna para nova digita��o.
*/

#include <stdio.h>

main(){
	int num_par, num_impar, num;
	
	inicio:
		printf("Informe um numero: ");
		scanf("%i", &num);
			
			if(num <= 0) {
				
				printf("\nErro !\n");
				goto inicio;
				
			}
				
		if(num%2 == 0) {
		
			num_impar = num - 1;
			
				while(num >= 0){
					
					printf("\nPar ----- Impar\n%i ----- %i\n", num, num_impar);
					num_impar -= 2;
					num -= 2;
					
						if(num_impar < 0){
							break;
						}
						
				}
				
		}else {
			
			num_par = num - 1;
			
				while(num >= 0) {
					
					printf("\nPar ----- Impar\n%i ----- %i\n", num_par, num);
					num_par -= 2;
					num -= 2;		
					
						if(num < 0){
							break;
						}
						
				}
				
		}
		
	return 0;
}

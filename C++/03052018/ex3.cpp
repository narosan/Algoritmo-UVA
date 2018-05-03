/*
    3. Fazer um programa que recebe um número inteiro qualquer e mostre os números pares e ímpares (separados, em duas colunas),
	de 1 até esse número inteiro.
	O número digitado não pode ser zero e nem negativo. Caso seja, mensagem de erro e retorna para nova digitação.
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

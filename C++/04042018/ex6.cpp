/*
6) Fazer um programa para que o usuário opte por uma opção de
conversão “1 – Celsius 2 – Farenheit”. Após a escolha o usuário deverá
informar a temperatura. Criar uma nova função para aplicar a conversão
conforme opção escolhida.
Fórmulas:
C=5*(F-32)/9
F=(9*C/5) + 32
*/

#include <stdio.h>
#include <stdlib.h>

int converteCelsius(float farenheit){
	float C;
	
	C = 5 * (farenheit-32) / 9;
	
	printf("%.1f em graus Farenheit é equivalente a %.1f graus Celsius.", farenheit, C);
	
	return 0;
}

int converteFarenheit(float celsius){
	float F;
	
	F = (9 * celsius / 5) + 32;
	
	printf("\n%.1f em graus Celsius eh equivalente a %.1f graus Farenheit.\n", celsius, F);
	
	return 0;
}

main(){
	int menu;
	float temperatura;
	
		printf("====== Programa para converter graus Celsius ou Farenheit ======\n\n");
		printf("1 - Celsius\n2 - Farenheit\n:");
		scanf("%i", &menu);
			switch(menu){
				case 1:
					printf("Informe a temperatura em graus Farenheit: ");
					scanf("%f", &temperatura);
					
					converteCelsius(temperatura);
				break;
				
				case 2:
					printf("Informe a temperatura em graus Celsius: ");
					scanf("%f", &temperatura);
					
					converteFarenheit(temperatura);
				break;
			}
			
	system("pause");
	return 0;
}

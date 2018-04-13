/*
3) Fazer um programa para cálculo de conversão de valores para
viagem ao exterior. O programa deverá converter para a moeda o
valor em real informado pelo viajante conforme país escolhido na
tabela.
	TABELA
Russia 1.68
USA 3.27
Paquistao 0.57
Egito 1.25
Italia 4.51
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float real, valor_convert;
	char pais[20];
	
	inicio:
		printf("Informe o valor em real que você deseja converter: ");
		scanf("%f", &real);
		
		printf("Informe o país que você deseja visitar: \n");
		printf("Russia\nUSA\nPaquistao\nEgito\nItalia\n");
		fflush(stdin);
		gets(pais);
		
			if(strcmp(pais,"Russia")==0){
				valor_convert = real / 1.68;
					printf("%.2f é o valor que você terá no país destino.", valor_convert);
			}else if(strcmp(pais,"USA")==0){
				valor_convert = real / 3.27;
					printf("%.2f é o valor que você terá no país destino.", valor_convert);
			}else if(strcmp(pais,"Paquistao")==0){
				valor_convert = real / 0.57;
					printf("%.2f é o valor que você terá no país destino.", valor_convert);
			}else if(strcmp(pais,"Egito")==0){
				valor_convert = real / 1.25;
					printf("%.2f é o valor que você terá no país destino.", valor_convert);
			}else if(strcmp(pais,"Italia")==0){
				valor_convert = real / 4.51;
					printf("%.2f é o valor que você terá no país destino.", valor_convert);
			}else {
				printf("Informe o nome do país destino correto.");
			}
		
	return 0;
			
}

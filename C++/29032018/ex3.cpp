/*
3) Fazer um programa para c�lculo de convers�o de valores para
viagem ao exterior. O programa dever� converter para a moeda o
valor em real informado pelo viajante conforme pa�s escolhido na
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
		printf("Informe o valor em real que voc� deseja converter: ");
		scanf("%f", &real);
		
		printf("Informe o pa�s que voc� deseja visitar: \n");
		printf("Russia\nUSA\nPaquistao\nEgito\nItalia\n");
		fflush(stdin);
		gets(pais);
		
			if(strcmp(pais,"Russia")==0){
				valor_convert = real / 1.68;
					printf("%.2f � o valor que voc� ter� no pa�s destino.", valor_convert);
			}else if(strcmp(pais,"USA")==0){
				valor_convert = real / 3.27;
					printf("%.2f � o valor que voc� ter� no pa�s destino.", valor_convert);
			}else if(strcmp(pais,"Paquistao")==0){
				valor_convert = real / 0.57;
					printf("%.2f � o valor que voc� ter� no pa�s destino.", valor_convert);
			}else if(strcmp(pais,"Egito")==0){
				valor_convert = real / 1.25;
					printf("%.2f � o valor que voc� ter� no pa�s destino.", valor_convert);
			}else if(strcmp(pais,"Italia")==0){
				valor_convert = real / 4.51;
					printf("%.2f � o valor que voc� ter� no pa�s destino.", valor_convert);
			}else {
				printf("Informe o nome do pa�s destino correto.");
			}
		
	return 0;
			
}

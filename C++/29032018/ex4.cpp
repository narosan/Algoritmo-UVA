/*
4) Fazer um programa para reajustar o valor do salário do
funcionário. O salário será informado em tempo de execução. O
programa deverá reajustar o salário informado com base nas
premissas da tabela abaixo. O valor do salário não pode ser menor
do que 1.000,00 e nem maior do 7.000,00. O Estado não pode ser
diferente do que foi informado na tabela e nem o sexo. Caso algum
erro aconteça, mensagem de erro e retorna para digitação daquela
informação.

Estado Sexo Percentual Reajuste
Goias f 10
Minas f 14
Rio m 26
Acre f 39
Rondonia m 8

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int salario, percentual_reajuste;
	char sexo[1],estado[30];
	
	
	printf("Informe seu estado[Goias/Minas/Rio/Acre/Rondonia]: ");
	fflush(stdin);
	gets(estado);
	
	printf("Qual seu sexo[m/f]");
	fflush(stdin);
	gets(sexo);
	
	printf("Por último informe seu salário: ");
	scanf("%i", &salario);
	
		if(strcmp(estado,"Goias")==0 && strcmp(sexo,"f")==0){
			
			salario = salario * 1.10;
			printf("O seu novo salário é %i", salario);
			
		}else if(strcmp(estado,"Minas")==0 && strcmp(sexo,"f")==0){
			
			salario = salario * 1.14;
			printf("O seu novo salário é %i", salario);
			
		}else if(strcmp(estado,"Rio")==0 && strcmp(sexo,"m")==0){
			
			salario = salario * 1.26;
			printf("O seu novo salário é %i", salario);
			
		}else if(strcmp(estado,"Acre")==0 && strcmp(sexo,"f")==0){
			
			salario = salario * 1.39;
			printf("O seu novo salário é %i", salario);
			
		}else if(strcmp(estado,"Rondonia")==0 && strcmp(sexo,"m")==0){
			
			salario = salario * 1.08;
			printf("O seu novo salário é %i", salario);
			
		}else{
			
			printf("Digite corretamente o seu sexo e cidade.");
			
		}
		
	return 0;
}

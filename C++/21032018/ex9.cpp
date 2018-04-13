/*
9) Fazer um programa para que o usuário digite um salário e o
programa deverá calcular seu reajuste. Exibir mensagem com o valor
do desconto.
Salario <= 600 e sexo = ‘M’, aplicar desconto de 20%
Salario <= 1200 e sexo = ‘F’, aplicar desconto de 20%
Salario <= 2000 e sexo ‘M’, aplicar desconto de 25%
Senão, desconto de 30% - ambos os sexos
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double salario=0, reajuste=0;
	char sexo;
	
	printf("Qual seu sexo 'M' ou 'F': ");
	scanf("%c", &sexo);
	printf("Informe seu salário: ");
	scanf("%lf", &salario);
	
	if(sexo!='M' && sexo!='F'){
		printf("Digite o sexo certo !\n\n");
	}else if(sexo=='M' && salario<=600){
		  reajuste = salario * 1.2;
		  printf("Seu sexo é %c e seu salário é %.2lf", sexo, reajuste);
	}else if(sexo=='M' && salario<=2000){
 		  reajuste = salario * 1.25;
 		  printf("Seu sexo é %c e seu salário é %.2lf", sexo, reajuste);
	}else if(sexo=='F' && salario<=600){
		  reajuste = salario * 1.2;
		  printf("Seu sexo é %c e seu salário é %.2lf", sexo, reajuste);
	}else{
		reajuste = salario * 1.3;
		printf("Seu sexo é %c e seu salário é %.2lf", sexo, reajuste);
	}
	
	return 0;
		
}

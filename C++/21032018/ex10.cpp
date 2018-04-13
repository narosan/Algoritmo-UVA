/*
10) Fazer um programa para que o usuário digite um nome, uma
idade e um sexo ‘M’ ou ‘F’. O programa deverá exibir mensagem de
“Esta Aceito” caso a idade seja < 25 o sexo == ‘F’, caso contrário
mensagem de “Não Aceita”.
*/

#include<stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");

	int idade=0;
	char sexo, nome[50];
	
	printf("Informe seu sexo : ");
	scanf("%c", &sexo);
	printf("Informe seu nome : ");
	scanf(" %[^\n]s", &nome);
	printf("Informe sua idade : ");
	scanf("%i", &idade);
	
		if(sexo=='F' && idade>=25){
			printf("Esto aceito %s !", nome);
		}else {
			printf("Não está aceito.");
		}

	return 0;

}

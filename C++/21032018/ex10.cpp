/*
10) Fazer um programa para que o usu�rio digite um nome, uma
idade e um sexo �M� ou �F�. O programa dever� exibir mensagem de
�Esta Aceito� caso a idade seja < 25 o sexo == �F�, caso contr�rio
mensagem de �N�o Aceita�.
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
			printf("N�o est� aceito.");
		}

	return 0;

}

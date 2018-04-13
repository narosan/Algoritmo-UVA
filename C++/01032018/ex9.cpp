/*
09) Faça um programa para que o usuário informe comprimento,
largura e altura de um objeto para que o programa possa calcular o
volume do objeto. Exibir o valor do objeto obtido em uma
mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculoVolume(float comprimento, float largura, float altura){
	float volume;
	
	volume = comprimento * largura * altura;
	
	printf("O volume é : %.2f", volume);
}

main(){
	float comprimento, largura, altura;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o comprimento do objeto: ");
	scanf("%f", &comprimento);
	printf("Informe a largura do objeto: ");
	scanf("%f", &largura);
	printf("Informe a altura do objeto: ");
	scanf("%f", &altura);
	
	calculoVolume(comprimento, largura, altura);
	
	return 0;
}

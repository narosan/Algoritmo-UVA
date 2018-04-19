#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int organizaNumeros(int num1, int num2, int num3){
	int maior, menor, meio;
	
		if(num1>num2 && num1 > num3){
			maior = num1;
		}else if(num2 > num1 && num2 > num3){
			maior = num2;
		}else {
			maior = num3;
		}// Fim bloco de c�digo maior n�mero.
		
		if(num1 < num2 && num1 < num3){
			menor = num1;
		}else if(num2 < num1 && num2 < num3){
			menor = num2;
		}else {
			menor = num3;
		}// Fim bloco de c�digo menor n�mero.
		
		if(num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3){
			meio = num1;
		}else if(num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3){
			meio = num2;
		}else {
			meio = num3;
		}//Fim bloco de c�digo do n�mero intermedi�rio.
		
		printf("\nO maior n�mero �: %i\nO intermedi�rio �: %i\nO menor n�mero �: %i\n", maior, meio, menor);
}// Fim fun��o organizaNumeros.

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3, media, raiz;
	char resposta[5];
	
	n1:
		printf("Informe o primeiro n�mero: ");
		scanf("%i", &num1);
			if(num1 <= 0 || num1%3!=0 && num1%6!=0){
				printf("\nErro!!\nN�o � possivel ter n�mero 0 ou negativo\nO primeiro n�mero precisa ser multiplo de 3 e 6.\n");
				goto n1;
			}// Fim reestri��o do primeiro n�mero.
	
	n2:
		printf("Informe o segundo n�mero: ");
		scanf("%i", &num2);
			if(num2 <= 0 || num2%2!=0 || num2 <= num1){
				printf("\nErro!!\nN�o � possivel ter n�mero 0 ou negativo\nO segundo n�mero precisa ser multiplo de 2");
				printf("O segundo n�mero n�o pode ser maior que o primeiro.\n");
				goto n2;
			}// Fim reestri��o do segundo n�mero.
			
	n3:
		printf("Informe o terceiro n�mero: ");
		scanf("%i", &num3);
			if(num3 <= 0 || num3%3!=0 || num3 < 21 && num3 > 145 || num3 <= num2){
				printf("\nErro!!\nN�o � possivel ter n�mero 0 ou negativo\nO terceiro n�mero precisa ser multiplo de 3");
				printf("O terceiro n�mero tem que ser maior que 21 e menor que 145.\n");
				goto n3;
			}// Fim reestri��o do terceiro n�mero.
			
	organizaNumeros(num1,num2,num3); // Chamando a fun��o organizaNumeros.
	
	media = (num1 + num2 + num3) / 3;
	
	raiz = sqrt(media);
	
		printf("A m�dia � : %i\nA raiz quadrada � : %i\n\n", media, raiz);
		
		resp:
			printf("Voc� deseja continuar o programa [sim/nao] ? -> ");
			fflush(stdin);
			gets(resposta);
			
				if(strcmp(resposta,"sim") == 0){
					num1 = 0;
					num2 = 0;
					num3 = 0;
					media = 0;
					raiz = 0;
					
					goto n1;
				}else if(strcmp(resposta,"nao") == 0) {
					printf("--- O programa est� encerrando ---");
				}else {
					printf("\nResposta incorreta !\nResponda novamente.\n\n");
					goto resp;
				}// Fim bloco que compara a resposta com sim ou n�o.
			
	return 0;
}

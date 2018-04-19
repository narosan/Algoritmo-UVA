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
		}// Fim bloco de código maior número.
		
		if(num1 < num2 && num1 < num3){
			menor = num1;
		}else if(num2 < num1 && num2 < num3){
			menor = num2;
		}else {
			menor = num3;
		}// Fim bloco de código menor número.
		
		if(num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3){
			meio = num1;
		}else if(num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3){
			meio = num2;
		}else {
			meio = num3;
		}//Fim bloco de código do número intermediário.
		
		printf("\nO maior número é: %i\nO intermediário é: %i\nO menor número é: %i\n", maior, meio, menor);
}// Fim função organizaNumeros.

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3, media, raiz;
	char resposta[5];
	
	n1:
		printf("Informe o primeiro número: ");
		scanf("%i", &num1);
			if(num1 <= 0 || num1%3!=0 && num1%6!=0){
				printf("\nErro!!\nNão é possivel ter número 0 ou negativo\nO primeiro número precisa ser multiplo de 3 e 6.\n");
				goto n1;
			}// Fim reestrição do primeiro número.
	
	n2:
		printf("Informe o segundo número: ");
		scanf("%i", &num2);
			if(num2 <= 0 || num2%2!=0 || num2 <= num1){
				printf("\nErro!!\nNão é possivel ter número 0 ou negativo\nO segundo número precisa ser multiplo de 2");
				printf("O segundo número não pode ser maior que o primeiro.\n");
				goto n2;
			}// Fim reestrição do segundo número.
			
	n3:
		printf("Informe o terceiro número: ");
		scanf("%i", &num3);
			if(num3 <= 0 || num3%3!=0 || num3 < 21 && num3 > 145 || num3 <= num2){
				printf("\nErro!!\nNão é possivel ter número 0 ou negativo\nO terceiro número precisa ser multiplo de 3");
				printf("O terceiro número tem que ser maior que 21 e menor que 145.\n");
				goto n3;
			}// Fim reestrição do terceiro número.
			
	organizaNumeros(num1,num2,num3); // Chamando a função organizaNumeros.
	
	media = (num1 + num2 + num3) / 3;
	
	raiz = sqrt(media);
	
		printf("A média é : %i\nA raiz quadrada é : %i\n\n", media, raiz);
		
		resp:
			printf("Você deseja continuar o programa [sim/nao] ? -> ");
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
					printf("--- O programa está encerrando ---");
				}else {
					printf("\nResposta incorreta !\nResponda novamente.\n\n");
					goto resp;
				}// Fim bloco que compara a resposta com sim ou não.
			
	return 0;
}

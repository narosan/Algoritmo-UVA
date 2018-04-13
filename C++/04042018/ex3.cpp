/*
3) Faça um programa que pergunte a mesada de um adolescente, após
isto pergunte se ele quer comprar algum produto, caso ele responda
“não”, o programa irá imprimir uma mensagem mostrando qual o valor
da mesada dele, caso responda “sim” o programa irá pergunta qual o
valor do produto e irá mostrar na tela o saldo final dele (deduzir a mesada
do valor do produto). O valor do produto não pode ser maior que o valor
da mesada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	float mesada, produto;
	char resp[10];
	
	msd:
		printf("Informe a sua mesada: ");
		scanf("%f", &mesada);
			if(mesada<=0){
				printf("\nNao eh possivel ter valor negativo ou 0 na mesada !");
				goto msd;
			}
	rsp:
		printf("Deseja comprar algum produto ? [sim/nao]");
		fflush(stdin);
		gets(resp);
		
			if(strcmp(resp,"nao")==0){
				printf("\nMesada ===> R$%.2f", mesada);
			}else if(strcmp(resp,"sim")==0){
				printf("\nInforme o valor do produto que voce deseja comprar: ");
				scanf("%f", &produto);
					if(produto>mesada){
						printf("\n Produto mais caro que sua mesada \n");
					}else{
						printf("\nMesada ===> R$%.2f\nProduto ===> R$%.2f\nValor final da Mesada ===> R$%.2f\n", mesada, produto, mesada-produto);
					}
			}else {
				printf("\nEssa resposta nao eh valida.\n");
				goto rsp;
			}
		
	return 0;
		
}

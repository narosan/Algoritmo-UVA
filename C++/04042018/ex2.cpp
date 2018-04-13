/*
2) Uma empresa abriu uma linha de crédito para os funcionários. O valor
da prestação não pode ultrapassar 30% do salário. Faça um programa
que receba o salário, o valor do empréstimo e o número de prestações e
informe se o empréstimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconteça, mensagem de erro
e retornar para nova digitação daquela informação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
	float salario, valor_emp, parcela_emp;
	int nmr_prest;
	
	sal:
		printf("Informe o seu salario: ");
		scanf("%f", &salario);
			if(salario<=0){
				printf("\nNao eh possivel ter salario negativo ou igual a 0.\n\n");
				goto sal;
			}
	
	emp:
		printf("Informe o valor do emprestimo que deseja: ");
		scanf("%f", &valor_emp);
			if(valor_emp<=0){
				printf("\nNao eh possivel ter emprestimo negativo ou igual a 0.\n\n");
				goto emp;
			}
			
	prest:
		printf("Informe o numero de prestacoes: ");
		scanf("%i", &nmr_prest);
			if(nmr_prest<=0){
				printf("\nEh preciso exister no minimo 1 prestacao !\n\n");
				goto prest;
			}
			
			parcela_emp = valor_emp / nmr_prest;
			
		if(parcela_emp<(salario*0.30)){
			printf("Pode ser concedido.");
		}else{
			printf("Nao pode ser concedido.");
		}
		
	return 0;
}

/*
2) Uma empresa abriu uma linha de cr�dito para os funcion�rios. O valor
da presta��o n�o pode ultrapassar 30% do sal�rio. Fa�a um programa
que receba o sal�rio, o valor do empr�stimo e o n�mero de presta��es e
informe se o empr�stimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconte�a, mensagem de erro
e retornar para nova digita��o daquela informa��o.
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

/*
5) Fazer um programa para que o usu�rio digite um n�mero e o
programa verifique se o n�mero � m�ltiplo de 2 ou de 5 ou de 10.
Exibir mensagem de erro caso o n�mero digitado n�o seja m�ltiplo
de nenhum destes. O programa n�o poder� permitir que o n�mero
zero seja digitado, nem negativo e nem maior do que 100. Caso
ocorra, mensagem de erro e retornar para nova digita��o.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	inicio:
	
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
		if(numero<=0 || numero>100){
			printf("N�o � possivel ter n�meros a baixo de 0 ou a cima de 100.");
			goto inicio;
		}else{
			if(numero%2==0 && numero%5==0 && numero%10==0){
				printf("%i � multiplo de 2, 5 e 10.", numero);
			}else{
				printf("%i n�o � multiplo de 2, 5 e 10.", numero);
			}
		}
		
	return 0;
}

/*
7) Fazer um programa para que o usu�rio digite um nome, uma idade
e um sexo �M� ou �F�. O programa dever� exibir mensagem de �Esta
Aceito no Projeto� caso a idade seja > 18 e < 35 o sexo == �F�, caso
contr�rio mensagem de �N�o Aceita no Projeto�. O programa dever�
verificar se a idade digitada � negativa, zero ou maior do que 100.
Caso seja, mensagem de erro e retornar para nova digita��o. O sexo
s� poder� ser digitado M ou F. Caso contr�rio, mensagem de erro e
retorna para nova digita��o.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome, sexo;
	int idade;
	
	inicio:
	
	printf("Informe seu nome: ");
	scanf(" %[^\n]s", &nome);
	printf("Informe seu sexo(M/F): ");
	scanf(" %c", &sexo);

		if(sexo=='M' || sexo=='F'){
			printf("Informe sua idade: ");
			scanf("%i", &idade);
					if(idade<=0 || idade>100){
						printf("N�o � possivel ter idade menor ou igual a 0\nTamb�m n�o � possivel ter idade maior do que 100.\n");
						goto inicio;
					}
					if(idade>18 && idade<35 || sexo=='F'){
							printf("Bem vindo ao projeto %s !!", nome);
						}else{
							printf("N�o aceito no projeto.");
						}
				}else{
					printf("Inv�lido\n");
					goto inicio;
				}
		return 0;
}

	/*
		if(sexo!='M' || sexo!='F'){
			printf("Sexo n�o confere, informe suas informa��es novamente.\n");
			goto inicio;
		}
		if(idade<=0 || idade>100){
			printf("N�o � possivel ter idade menor ou igual a 0\n Tamb�m n�o � possivel ter idade maior do que 100.");
			goto inicio;
		}else{
			if(idade>18 && idade<35 || sexo=='F'){
				printf("Bem vindo ao projeto %s !!", nome);
			}else{
				printf("N�o aceito no projeto.");
			}
		} */
	

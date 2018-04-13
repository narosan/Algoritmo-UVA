/*
7) Fazer um programa para que o usuário digite um nome, uma idade
e um sexo ‘M’ ou ‘F’. O programa deverá exibir mensagem de “Esta
Aceito no Projeto” caso a idade seja > 18 e < 35 o sexo == ‘F’, caso
contrário mensagem de “Não Aceita no Projeto”. O programa deverá
verificar se a idade digitada é negativa, zero ou maior do que 100.
Caso seja, mensagem de erro e retornar para nova digitação. O sexo
só poderá ser digitado M ou F. Caso contrário, mensagem de erro e
retorna para nova digitação.
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
						printf("Não é possivel ter idade menor ou igual a 0\nTambém não é possivel ter idade maior do que 100.\n");
						goto inicio;
					}
					if(idade>18 && idade<35 || sexo=='F'){
							printf("Bem vindo ao projeto %s !!", nome);
						}else{
							printf("Não aceito no projeto.");
						}
				}else{
					printf("Inválido\n");
					goto inicio;
				}
		return 0;
}

	/*
		if(sexo!='M' || sexo!='F'){
			printf("Sexo não confere, informe suas informações novamente.\n");
			goto inicio;
		}
		if(idade<=0 || idade>100){
			printf("Não é possivel ter idade menor ou igual a 0\n Também não é possivel ter idade maior do que 100.");
			goto inicio;
		}else{
			if(idade>18 && idade<35 || sexo=='F'){
				printf("Bem vindo ao projeto %s !!", nome);
			}else{
				printf("Não aceito no projeto.");
			}
		} */
	

/*
5) Fazer um programa para calcular a m�dia de um aluno. O
programa dever� receber o nome do aluno, sexo, nota 1 e nota 2.
O nome n�o poder� ultrapassar 50 caracteres. O sexo n�o poder�
ser diferente de �m� ou �f�. As notas n�o poder�o ser negativas e nem 
maiores que 10. Caso aconte�a, mensagem de erro e retorna para
digita��o daquela informa��o.
Media < 4 ? Reprovado
Media >= 6 ? Aprovado
Media >= 4 e < 6 ? Prova Final. O programa dever� permitir a
digita��o de uma terceira nota. Esta m�dia dever� ser a terceira
nota mais a media e dividir por 2.
Verificar:
Media < 6 ? Reprovado
Media >= 6 ? Aprovado
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int verificaMedia(float med){
	printf("\n\n");
	if(med < 4 ){
		printf("Reprovado !!");
	}else if(med >= 6){
		printf("Aprovado !!");
	}else {
		printf("Recupera��o !!");
	}
	
	return 0;
}


main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50], sexo[1];
	float nota1, nota2, med;
	
	inicio:
		printf("Informe o seu nome: ");
		fflush(stdin);
		gets(nome);
		
		printf("Informe seu sexo[m/f]");
		fflush(stdin);
		gets(sexo);
		
		printf("Informe a 1a nota: ");
		scanf("%f", &nota1);
		
		printf("Informe a 2a nota: ");
		scanf("%f", &nota2);
		
			if(nota1<0 || nota1>10 || nota2<0 || nota2>10){
				printf("\nN�o � possiver ter notas menores que 0 ou maiores que 10.\n\n");
				goto inicio;
			}else{
				if(strcmp(sexo,"m")==0 || strcmp(sexo,"f")==0){
					med = (nota1 + nota2) / 2;
					printf("Nome     Sexo     M�dia\n%s  %s     %.2f", nome, sexo, med);
					verificaMedia(med);
				}else{
					printf("\nSexo incorreto !!\n\n");
					goto inicio;
				}
			}
			
	return 0;
}

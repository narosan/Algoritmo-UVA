/*
5) Fazer um programa para calcular a média de um aluno. O
programa deverá receber o nome do aluno, sexo, nota 1 e nota 2.
O nome não poderá ultrapassar 50 caracteres. O sexo não poderá
ser diferente de ‘m’ ou ‘f’. As notas não poderão ser negativas e nem 
maiores que 10. Caso aconteça, mensagem de erro e retorna para
digitação daquela informação.
Media < 4 ? Reprovado
Media >= 6 ? Aprovado
Media >= 4 e < 6 ? Prova Final. O programa deverá permitir a
digitação de uma terceira nota. Esta média deverá ser a terceira
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
		printf("Recuperação !!");
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
				printf("\nNão é possiver ter notas menores que 0 ou maiores que 10.\n\n");
				goto inicio;
			}else{
				if(strcmp(sexo,"m")==0 || strcmp(sexo,"f")==0){
					med = (nota1 + nota2) / 2;
					printf("Nome     Sexo     Média\n%s  %s     %.2f", nome, sexo, med);
					verificaMedia(med);
				}else{
					printf("\nSexo incorreto !!\n\n");
					goto inicio;
				}
			}
			
	return 0;
}

/*
3) Fazer uma programa para criar uma função que recebe três notas de um aluno e
os respectivos pesos. Calcula e retorna a média ponderada.
Fórmula:
media = (((p1*n1)+(p2*n2)+(p3*n3))/(p1+p2+p3));
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int notaAluno(float nota1, float nota2, float nota3, int peso1, int peso2, int peso3){
	float media;
		
	media = (((peso1 * nota1) + (peso2 * nota2) + (peso3 * nota3)) / (peso1+peso2+peso3));
	
	printf("A média do aluno é %.2f", media);
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2, nota3;
	int peso1, peso2, peso3;
	
	inicio:
		printf("Informe a nota do aluno e o seu peso: ");
		fflush(stdin);
		scanf("%f %i", &nota1, &peso1);
		printf("Informe a nota do aluno e o seu peso: ");
		fflush(stdin);
		scanf("%f %i", &nota2, &peso2);
		printf("Informe a nota do aluno e o seu peso: ");
		fflush(stdin);
		scanf("%f %i", &nota3, &peso3);
		
			if(nota1<0 || nota2<0 || nota3<0 || nota1>10 || nota2>10 || nota3>10){
				printf("\nNota informada é incorreta\n\n");
				goto inicio;
			}else{
				notaAluno(nota1, nota2, nota3, peso1, peso2, peso3);
			}
			
	return 0;
}

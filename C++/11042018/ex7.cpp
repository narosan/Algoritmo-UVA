/*
7) Fazer uma nova função que recebe a média final de um aluno por parâmetro e
retorna o seu conceito, conforme a tabela abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int conceitoAluno(float med){
	char conceito[20];
	
		if(med >= 0 && med <= 4.9){
			strcpy(conceito,"D");
		}else if(med >= 5 && med <= 6.9){
			strcpy(conceito,"C");
		}else if(med >= 7 && med <= 8.9){
			strcpy(conceito,"B");
		}else {
			strcpy(conceito,"A");
		}
	
	printf("O conceito do aluno é %s", conceito);
	
	return conceito[20];
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float med = 7.5;
	
		conceitoAluno(med);
		
	return 0;
}

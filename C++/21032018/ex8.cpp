/*
8) Fazer um programa para que o usuário digite três notas, o
programa deverá calcular a média aritmética e exibir o statuas.
Media >= 7, aprovado
Media <3, reprovado
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int nota1, nota2, nota3, med;
	int i;
	
	printf("Informe as notas do elemento: \n");
	scanf("%i", &nota1);
	scanf("%i", &nota2);
	scanf("%i", &nota3);
	
	med = (nota1+nota2+nota3) / 3;
	
		if(med>=7){
			printf("Representou a quebrada ! Aprovado ! %i", med);
		}
		if(med<3){
			printf("Se fudeu! %i", med);
		}
		if(med>3 && med<7){
			printf("Estuda pra recu ae ! %i", med);
		}
	
	return 0;
}


/*
11) Fazer um programa para que o usu�rio digite uma idade. O
programa dever� verificar:
idade < 16, �N�o Eleitor�
idade > 19 e < 63, �Eleitor Obrigat�rio�
idade < 18 ou > 64, �Eleitor Facultativo�
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	inicio:
	printf("Informe sua idade : ");
	scanf("%i", &idade);
		
		if(idade>0){
			if(idade<16){
				printf("N�o Eleitor.");
			}
			if(idade>19 && idade<63){
				printf("Eleitor Obrigat�rio.");
			}
			if(idade>16 && idade<18 || idade>64){
				printf("Eleitor Facultativo");
			}
		}else{
			printf("Insira uma idade real.\n\n");
			goto inicio;
		}
		
	return 0;
}


/*
2) Fazer um programa para que o usu�rio possa digitar quatro
palavras. O programa n�o poder� aceitar palavras com menos de
tr�s caracteres e com mais de 14 caracteres. Ao final o programa
dever� exibir quantas palavras possuem a mesma quantidade de
caracteres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra1[20], palavra2[20], palavra3[20], palavra4[20];
	int p1, p2, p3, p4;
	
	inicio:
		printf("Informe 4 palavras: \n");
		gets(palavra1);	
		gets(palavra2);
		gets(palavra3);
		gets(palavra4);	
		
		p1 = strlen(palavra1);
		p2 = strlen(palavra2);
		p3 = strlen(palavra3);
		p4 = strlen(palavra4);
		
			if(strlen(palavra1)<3 || strlen(palavra1)>14 || strlen(palavra2)<3 || strlen(palavra2)>14 ||
			strlen(palavra3)<3 || strlen(palavra3)>14 || strlen(palavra4)<3 || strlen(palavra4)>14) {
				printf("\nN�o � possivel ter palavras com menos de 3 caract�res ou mais de 14.\n");
				goto inicio;
			}else{
				if(p1 == p2 && p2 == p3 && p3 == p4){
					printf("Todas as paralavras possuem o mesmo n�mero de caract�res.");
				}else if(p1 == p2 && p1 == p3 || p1 == p2 && p1 == p4 || p1 == p3 && p1 == p4 ||
				 p2 == p1 && p2 == p3 || p2 == p1 && p2 == p4 || p2 == p3 && p2 == p4 || p3 == p1 && p3 == p2 
				 || p3 == p1 && p3 == p4 || p3 == p2 && p3 == p4 || p4 == p1 && p4 ==p2 || p4 == p1 && p4 == p3 || p4 == p2 && p4 == p3)  {
					printf("Possuem tr�s palavras com o mesmo n�mero de caract�res.");
				}else if(p1 == p2 || p1 == p3 || p1 == p4 || p2 == p3 || p2 == p4 || p3 == p4){
					printf("S� possuem 2 palavras com o mesmo n�mero de caract�res.");
				}else{
					printf("Todas as palavras tem caract�res diferentes.");
				}
			}
			
	return 0;
}

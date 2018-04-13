/*
4) Fazer um programa para criar uma função que leia cinco valores inteiros e
imprima o maior e o menor valor. As entradas de dados devem ser na função
principal.
*/

#include <stdio.h>

int maiorNumero(int n1, int n2, int n3, int n4, int n5){
	int maior;
	
		if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
			maior = n1;
		}else if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
			maior = n2;
		}else if(n3>n1 && n3>n2 && n3>n4 && n3>n5){
			maior = n3;
		}else if(n4>n1 && n4>n2 && n4>n3 && n4>n5){
			maior = n4;
		}else {
			maior = n5;
		}
	
	return maior;
}

int menorNumero(int n1, int n2, int n3, int n4, int n5){
	int menor;
	
		if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
			menor = n1;
		}else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
			menor = n2;
		}else if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
			menor = n3;
		}else if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
			menor = n4;
		}else {
			menor = n5;
		}
		
	return menor;
}

main(){
	int n1, n2, n3, n4, n5;
	int maior, menor;
	
	printf("Informe 5 numeros:\n");
	scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);
	
		maior = maiorNumero(n1, n2, n3, n4, n5);	
		menor = menorNumero(n1, n2, n3, n4, n5);
		
		printf("O menor numero eh %i.\nE o maior numero eh %i.\n\n", menor, maior);
		
	return 0;
}

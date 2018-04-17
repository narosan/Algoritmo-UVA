/*
5) Fazer um programa que recebe a idade de um nadador por parâmetro (criar nova
função para isso) e retorna, também por parâmetro, a categoria desse nadador de
acordo com a tabela abaixo:
Idade Categoria
5 a 7 anos Infantil A
8 a 10 anos Infantil B
11-13 anos Juvenil A
14-17 anos Juvenil B
Maiores de 18 anos
(inclusive)
Adulto
*/

#include <stdio.h>
#include <string.h>

char categoriaNadador(int idade){
	char categoria[20];
		
		if(idade >= 5 && idade <= 7){
			strcpy(categoria,"Infantil A");
		}else if(idade >= 8 && idade <= 10){
			strcpy(categoria,"Infantil B");
		}else if(idade >= 11 && idade <= 13){
			strcpy(categoria,"Juvenil A");
		}else if(idade >= 14 && idade <= 17){
			strcpy(categoria,"Juvenil B");
		}else {
			strcpy(categoria,"Adulto");
		}
	
	printf("A categoria do nadador eh %s", categoria);
	
	return categoria[20];
}

main(){
	int idade;
	char categoria[20];
	
	inicio:
		printf("Informe a idade do nadador: ");
		scanf("%i", &idade);
		
			if(idade<5){
				printf("\nO nadador nao se esta em nenhuma categoria.\n\n");
				goto inicio;
			}else {
				categoriaNadador(idade);
				//categoria[20] = categoriaNadador(idade);
			}
			
		//printf("%s", categoria);
		
	return 0;
}

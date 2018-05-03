/*
    4. Fazer um programa para exibir na tela todos os números divisíveis por 4 que sejam menores que 200.
*/

#include <stdio.h>

main(){
	int num = 0;
	
	while(num<200){
		printf("%i\n", num);
		num += 4;
	}
}

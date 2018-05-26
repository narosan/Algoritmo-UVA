/*
3) Apresentar todos os números divisíveis por 4 que sejam menores que 200.
*/

#include <stdio.h>

main() {
	int i;
	
	for(i=0;i<=200;i++) {
		if(i%4==0){
			printf("\n%i", i);
		}
	}
}

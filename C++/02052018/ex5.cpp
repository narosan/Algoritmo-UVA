/*
    5. Fazer um programa para que o usu�rio digite uma frase com no m�ximo 40 letras. Se o tamanho for maior que 40, 
	dar uma mensagem de erro e solicitar nova digita��o. Exibir na a frase na posi��o vertical (uma letra em baixo da outra).
*/

#include <stdio.h>
#include <string.h>

main(){
	int num_char, i = 0;
	char frase[39];
	
	inicio:
		printf("Escreva uma frase: ");
		gets(frase);
			
		num_char = strlen(frase);	
			
			if(num_char >= 40){
				printf("\nEscreva novamente.\n");
				goto inicio;
			}
		
		while(i <= num_char){
			printf("\n%c", frase[i]);
			i++;
		}
		
	return 0;
}

/*05) Fa�a um programa para que o usu�rio informe um n�mero e
fa�a o c�lculo da ter�a parte deste n�mero. Exibir os valores
informados e o resultado em uma �nica mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero : ");
	scanf("%f", &numero);
	
	printf("A ter�a parte de %.1f � %.1f", numero, numero/3);
	
	return 0;
}

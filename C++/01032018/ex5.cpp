/*05) Faça um programa para que o usuário informe um número e
faça o cálculo da terça parte deste número. Exibir os valores
informados e o resultado em uma única mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número : ");
	scanf("%f", &numero);
	
	printf("A terça parte de %.1f é %.1f", numero, numero/3);
	
	return 0;
}

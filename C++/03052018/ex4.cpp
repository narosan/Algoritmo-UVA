/*
    4. Fazer um programa que pergunte ao usu�rio quantos alunos tem na sala dele. O n�mero digitado n�o pode ser zero e nem negativo. 
	Caso seja, mensagem de erro e retorna para nova digita��o.
	Em seguida, atrav�s de um �while�, pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
	Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma.
*/

#include <stdio.h>

main() {
	int aux = 1, i = 0, alunos = 0, notas[aux], cont = 0;
	
	inicio:
		printf("Quantos alunos existem na sala ? -> ");
		scanf("%i", &alunos);
		
			if(alunos <= 0) {
				printf("\nErro !\n");
				goto inicio;
			}
		
		while(i < alunos) {
			cont++;
			aux++;
			printf("%i Aluno, Nota: ", cont);
			scanf("%i", &notas[aux]);
			i++;
		}
		
		i = 0;
		
		while(i < alunos) {
			printf("\n%i Aluno, Nota: %i", cont, notas[aux]);
			cont--;
			aux--;
			i++;
		}
		
	return 0;
}

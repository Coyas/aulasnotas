#include <stdio.h>
#include <string.h>

struct projecto2
{
	/* data */
	char nome[10];
	char apelido[10];
	char nomeprof[10];
	char apelidoprof[10];
	char disciplina[30];
	float nota1;
	float nota2;
};


int main() {
	int total;
	char nome[10], apelido[10], disciplina[10],nomeprof[10], apelidoprof[10];

	int count = 0;
	

	while(1) {
		// Apresentar o menu
		printf("#######################################################\n");
		printf("## Benvindo ao sistema de controle de alunos e notas ##\n");
		printf("#################################################### ##\n");

		// pegar os dados para serem processados
		printf("Digite o nome e apelido do aluno: ");
		scanf("%s %s", &nome, &apelido);
		printf("Digite o nome e apelido do professor: ");
		scanf("%s %s", &nomeprof, &apelidoprof);
		printf("qual é a disciplina: ");
		scanf("%s", &disciplina);	
		printf("Nota teste 1: ");
		// scanf("%f", &nota1);
		// printf("Nota teste 2: ");
		// scanf("%f", &nota2);	

		// Apresentar os calculos dos dados
		printf("\n\n\n\n##################################\n");
		printf("Resultados das notas\n");
		printf("Nome: %s %s\n", nome, apelido);
		printf("Professor: %s %s\n", nomeprof, apelidoprof);
		printf("disciplina: %s\n", disciplina);
		// printf("teste 1: %2.2f\n", nota1);
		// printf("teste 2: %2.2f\n", nota2);
		// printf("Media: %d\n", (nota1 + nota2) / 2);
		printf("##################################\n\n\n\n\n");
	}


}
#include <stdio.h>
#include <string.h>
#define total 1

float calcular_a_media_geral(float,float);
float calcular_Media(float,float);

int main() {
	
	char nome[10], apelido[10], disciplina[10],nomeprof[10], apelidoprof[10];
	int x;
	float nota1, nota2, Media[2], soma, Media_geral;
	
	for(x=0;x<total;x++) {
		
		puts("Digite o nome e apelido do aluno: ");
		scanf("%c,%c", &nome,&apelido);
		fgets(nome,10,stdin);
		fgets(apelido,10,stdin);
 
	}
		
		for(x=0;x<2;x++) {
			
			puts("\n\nDigite o nome da desciplina: ");
			scanf("%c", &disciplina);
			fgets(disciplina,10,stdin);
		
			puts("Digite o nome e apelido do professor que lecionou a desciplina: ");
			scanf("%c,%c", &nomeprof,&apelidoprof);
			fgets(nomeprof,10,stdin);
			fgets(apelidoprof,10,stdin);
			
			puts("digite a nota do primeiro teste nessa desciplina: ");
			scanf("%f", &nota1);
		
			puts("digite a nota do segundo teste nessa desciplina: ");
			scanf("%f", &nota2);
		
		}
		
	for(x=0;x<2;x++) {
		
		soma = nota1 + nota2;
		  printf("\n\nA Soma das duas notas do aluno: %s %s é igual a %f",nome, apelido, soma);
		  
		  Media[2]= soma / 2;
		  printf("\nO aluno: %s %s,teve uma Media de %.2f na desciplina de %s %s", nome ,apelido , Media[2], nomeprof, apelidoprof);
	}
	for(x=0;x<2;x++) {
	
	}
	
	
	
	return 0;		
}

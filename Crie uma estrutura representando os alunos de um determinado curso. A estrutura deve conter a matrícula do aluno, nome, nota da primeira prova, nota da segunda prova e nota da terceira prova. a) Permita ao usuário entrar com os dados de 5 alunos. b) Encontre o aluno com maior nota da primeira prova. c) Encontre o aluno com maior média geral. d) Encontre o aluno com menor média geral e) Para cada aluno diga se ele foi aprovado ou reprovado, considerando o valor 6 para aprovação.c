#include <stdio.h>
#include <locale.h>

Crie uma estrutura representando os alunos de um determinado curso. A estrutura 
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor
6 para aprovação.

	struct alunos {
 char matricula[10];
 char nome[50];
 float nota[3];
};

int main () { 

	setlocale (LC_ALL, "portuguese"); 
	struct alunos a[5];
 int i,  maiornota1_i, maiormediageral_i, menormediageral_i;
 float maiornota1=0, mediageral[5], maiormediageral=0, menormediageral;
 
  for(i=0; i<5; i++){
  	
  	printf("\n\nDigite a matricula do 1º%.s Aluno: ",i+1);
    scanf("%s",&a[i].matricula);
    printf("Nome do %d Aluno: ",i+1);
    scanf("%s",&a[i].nome);
    printf("Nota 1: ");
    scanf("%f",&a[i].nota[0]);
    printf("Nota 2: ");
    scanf("%f",&a[i].nota[1]);
    printf("Nota 3: ");
    scanf("%f",&a[i].nota[2]);
    
     mediageral[i] = a[i].nota[0]+a[i].nota[1]+a[i].nota[2];
     
      if(maiornota1 < a[i].nota[0]) {

        maiornota1 = a[i].nota[0];

        maiornota1_i = i;

    }
    if(mediageral[i] > maiormediageral) {
        maiormediageral = mediageral[i];
        maiormediageral_i = i;

    }
    if(mediageral[i] < menormediageral) {
        menormediageral = mediageral[i];
        menormediageral_i = i;

    }

 };

    printf("----\n\nAluno com maior Nota 1: %s----",a[maiornota1_i].nome);
    printf("----\n\nAluno com maior media: %s----",a[maiormediageral_i].nome);
    printf("----\n\n Aluno com menor media: %s\n\n",a[menormediageral_i].nome);

    int y = 0;
    for(y = 0; y<5; y++) {

        if(mediageral[y] <= 6){

            printf("\n\n Aluno %s REPROVADO\n",a[y].nome);
        }else {
            printf("\nAluno %s APROVADO\n",a[y].nome);
        }

    }
	
	return 0; 
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o
//nome, nota1, nota2. Calcule a média aritmética simples dos 10 alunos e depois
//escreva em um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média.
//Lembre-se de que as notas e média deverão ser apresentadas como valores que
//possuem até 2 casas após a vírgula.
            struct aluno { 
            char nome[50]; 
            float n1, n2; 
            float media; 
}; 

    void cal_media(struct aluno *alunos, int n_alunos) { 
        for (int i=0; i<n_alunos; i++) { 
            alunos[i].media = (alunos[i].n1 + alunos[i].n2) /2; 
        } 
    } 
        void escrever_arquivo(struct aluno *alunos, int n_alunos) { 
            FILE *arquivo = fopen("alunos.txt", "w"); 
              if (arquivo != NULL) { 
                  for (int i=0; i<n_alunos; i++) { 
                      fprintf(arquivo, "Nome: %s\n", alunos[i].nome); 
                      fprintf(arquivo, "n1: %.2f\n", alunos[i].n1);
                      fprintf(arquivo, "n2: %.2f\n", alunos[i].n2);
                      fprintf(arquivo, "media: %.2f\n\n", alunos[i].media);
                  } 
                    fclose(arquivo); 
                    printf ("Dados dos alunos escritos no arquivo com sucesso!\n"); 
              } else { 
                  printf ("Erro ao criar o arquivo.\n"); 
              } 
        } 
        int main()
{ 
    struct aluno alunos[10]; 
    for (int i=0; i<10; i++) { 
        printf ("Digite o nome do aluno:\n"); 
        scanf ("%s", alunos[i].nome); 
        printf ("Digite a nota 1 do aluno %d:\n", i + 1);
        scanf ("%f", &alunos[i].n1); 
        printf ("Digite a nota 2 do aluno %d:\n", i + 1);
        scanf ("%f", &alunos[i].n2); 
    } 
      cal_media(alunos, 10); 
      escrever_arquivo(alunos, 10); 
                 
    return 0;
}

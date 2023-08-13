#include <stdio.h>
#include <stdlib.h> 

//Faça um programa que requisite o ano atual ao usuário, abra um arquivo de texto,
//que contém um conjunto de registros formados por nomes e datas de nascimento,
//por exemplo:

int main()
{
    FILE *p; 
    char nome[50]; 
    int dia;
    int mes; 
    int ano; 
    int anoatual; 
    int idade; 
    printf ("Digite o ano atual:\n"); 
    scanf ("%d", &anoatual); 
    p= fopen ("arq.txt", "r"); 
    while (fscanf (p, "%s %d %d %d", &nome, &dia, &mes, &ano) != EOF) { 
        idade = anoatual-ano; 
        printf ("%s tem ou tera %d",idade); 
    } 
    fclose (p); 
}

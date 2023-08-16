#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que receba um título e um texto, ambos inseridos pelo usuário,
//crie um arquivo que tenha como nome o título e grave nesse arquivo o texto.

    void criar_arquivo(const char *titulo, const char *texto) { 
        
    char nome_arquivo[100]; 
    sprintf (nome_arquivo, "%s.txt", titulo); 
    
      FILE *arquivo = fopen(nome_arquivo, "w"); 
    if (arquivo!= NULL) { 
        fputs(texto, arquivo); 
        fclose(arquivo); 
        printf ("Arquivo criado com sucesso!:\n"); 
    }else{ 
     printf ("Erro ao criar arquivo.\n"); 
    } 
       } 
       
int main()
{
     char titulo[50]; 
     char texto[100]; 
     printf ("Insira o texto:\n"); 
     fgets(texto, sizeof(texto), stdin); 
     titulo[strcspn(titulo, "\n")]= '\0'; 
     
     printf ("Insira o texto:\n");
     fgets(texto, sizeof(texto), stdin); 
     
     
     criar_arquivo(titulo, texto); 
     
    return 0;
}

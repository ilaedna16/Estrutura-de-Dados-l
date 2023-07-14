#include<stdio.h>
#include<locale.h>
//Faça um programa para armazenar um livro de receitas e:
//- Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
//ingredientes e ingredientes.
//- Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o
//vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade.


    struct receitas{
        char nome[25];
        int quant;  
        char ing[50];
    };

int main(void){ 
    setlocale (LC_ALL, "portuguese"); 

    struct receitas r[5];
     int x;  
     
        printf("Digite o nome de uma receita: ");
        scanf("%c",&r[x].nome[25]);
        printf("Qual a quantidade de ingredientes? ");
        scanf("%i",&r[x].quant);
        for (x = 0; x<5; x++) { 
    
     printf ("Nome: %s\t",r[x].nome); 
     printf ("Ingredientes: %c\n\n", r[x].ing[50]);
     printf ("Qantidade de ingredientes: %i\n\n", r[x].quant); 
     
        } 
     
    return 0; 
}

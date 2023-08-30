#include <stdio.h>
#include <stdlib.h>
//Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
//atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
//cinco atletas e os armazene em um arquivo texto. Leia esse arquivo texto e mostre
//na tela as informações de nome, esporte praticado e idade do atleta mais velho. E as
//informações de nome, esporte praticado e altura do atleta mais alto.


    struct Atleta {
     char nome[50];
     char esporte[50];
     int idade;
     float altura;
};

int main() {
    FILE *arq;
    int i;

    arq = fopen("atletas.txt", "w");
    
    struct Atleta atletas[5];

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d:\n", i + 1);
        scanf(" %[^\n]", atletas[i].nome);
        printf("Informe o esporte praticado:\n");
        scanf(" %[^\n]", atletas[i].esporte);
        printf("Insira a idade:\n");
        scanf("%d", &atletas[i].idade);
        printf("Insira a altura:\n");
        scanf("%f", &atletas[i].altura);

        fprintf(arq, "%s\n%s\n%d\n%.2f\n\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    fclose(arq);
    
    arq = fopen("atletas.txt", "r");
    
    struct Atleta atletaMaisVelho;
    atletaMaisVelho.idade = 0;

    struct Atleta atletaMaisAlto;
    atletaMaisAlto.altura = 0;
    
    for ( i = 0; i < 5; i++) {
        fscanf(arq, " %[^\n]", atletas[i].nome);
        fscanf(arq, " %[^\n]", atletas[i].esporte);
        fscanf(arq, "%d", &atletas[i].idade);
        fscanf(arq, "%f", &atletas[i].altura);

        if (atletas[i].idade > atletaMaisVelho.idade) {
            atletaMaisVelho = atletas[i];
        }

        if (atletas[i].altura > atletaMaisAlto.altura) {
            atletaMaisAlto = atletas[i];
        }
    }

    printf("\nAtleta mais velho:\n");
    printf("Nome: %s\n", atletaMaisVelho.nome);
    printf("Esporte praticado: %s\n", atletaMaisVelho.esporte);
    printf("Idade: %d\n", atletaMaisVelho.idade);

    printf("\nAtleta mais alto:\n");
    printf("Nome: %s\n", atletaMaisAlto.nome);
    printf("Esporte praticado: %s\n", atletaMaisAlto.esporte);
    printf("Altura: %.2f\n", atletaMaisAlto.altura);

    fclose(arq);
    return 0;
}

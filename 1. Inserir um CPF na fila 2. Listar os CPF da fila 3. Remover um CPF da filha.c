
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//1) Implementar um programa em C que carregue uma estrutura de dados
//fila (com ponteiros) contendo CPF (nÃºmero inteiro).
//O programa deve exibir um menu com as opÃ§Ãµes:

//1. Inserir um CPF na fila
//2. Listar os CPF da fila
//3. Remover um CPF da fila


    typedef struct no
{
    char cpf[12];
    struct no *prox;
} No;

    typedef struct FILA
{
    No *inicio;
    No *fim;

} FILA;

    FILA *fila_cria(void)
{
    FILA *nova_fila = (FILA *)malloc(sizeof(FILA));
    nova_fila->inicio = NULL;
    nova_fila->fim = NULL;
    return nova_fila;
}

    void fila_inserir(FILA *fila, char *cpf)
    {
    No *novo_no = malloc(sizeof(No));
    strcpy(novo_no->cpf, cpf);
    novo_no->prox = NULL;
    if (fila->inicio == NULL)
    {
        fila->inicio = novo_no;
        fila->fim = novo_no;
    } else{
        fila->fim->prox = novo_no;
        fila->fim = novo_no;
    }
}
    void fila_imprime(FILA *fila)
{

    if (fila)
    {
        No *aux = fila->inicio;
        while (aux)
        {
            printf("%s\n", aux->cpf);
            aux = aux->prox;
        }
    }
}

    int fila_remove(FILA *fila)
{
    char val[12];
    No *aux;

    if (fila->inicio == NULL)
    {
        return 0; 
    }else{
        strcpy(val, fila->inicio->cpf); 
        printf("CPF removido: %s\n", val);
        aux = fila->inicio;
        fila->inicio = aux->prox;

        if (fila->inicio == NULL)
        {
            fila->fim = NULL; 
        }

        free(aux);
        return 1;
    } }

int main()
{
    setlocale (LC_ALL, "portuguese");
    FILA *fila = fila_cria();
    int q, i;
    char cpf[12];
    printf("digite a quantidade de cpf que vocÃª quer inserir\n");
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        printf("Digite o CPF %d: ", i + 1);
        scanf("%s", cpf);
        fila_inserir(fila, cpf);
    }

    printf("CPFs:\n");

    fila_imprime(fila);
    fila_remove(fila);
    
    fila_imprime(fila);
    return 0;
}

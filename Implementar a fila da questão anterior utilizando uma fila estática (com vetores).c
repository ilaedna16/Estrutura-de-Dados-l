#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//2) Implementar a fila da questão anterior utilizando uma fila estática (com
//vetores).

//1. Inserir um CPF na fila
//2. Listar os CPF da fila
//3. Remover um CPF da fila

#define N 100
char fila[N][12];
int inicio, fim;

    void criarfila(void)
    {
    inicio = 0;
    fim = 0;
}

int filavazia(void)
{
    return inicio >= fim;
}
    void colocaNaFila(char *cpf)
    {
    strcpy(fila[fim++], cpf);
}
    void imprimindoNaFila()
{
    int i;
    for (i = inicio; i < fim; i++)
    {
        printf("CPF na fila: %s\n", fila[i]);
    }
}

char *tiraDaFila(void)
{
    return fila[inicio++];
}

int main()
{
    int q, i;
    char cpf[12], resp[10];
    printf("deseja adiciona um cpf\n");
    scanf("%s", resp);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
    while (strcmp(resp, "sim") == 0)
    {
        criarfila();                                                   
        printf("Digite a quantidade de CPFs que você quer inserir\n"); 
        scanf("%d", &q);

        for (i = 0; i < q; i++)
        {
            printf("Digite o CPF %d: ", i + 1);
            scanf("%s", cpf);
            colocaNaFila(cpf); 
        }

        printf("CPFs:\n");
        imprimindoNaFila(); 

        printf("CPF retirado da fila: %s\n", tiraDaFila());

        printf("CPFs após remoção:\n");
        imprimindoNaFila(); 
        printf("deseja adiciona um cpf\n");
        scanf("%s", resp);

        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
    }
    return 0;
}

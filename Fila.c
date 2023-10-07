#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no {
    int cpf;
    struct no* prox;
};

struct fila {
    struct no* frente;
    struct no* tras;
};

struct fila* criarfila() {
    struct Fila* fila = malloc(sizeof(struct fila));
    fila-> frente = fila-> tras = NULL;
    return fila;
}

void enfileirar(struct Fila* fila, int cpf) {
    struct no* novono = malloc(sizeof(struct no));
    novono->cpf = cpf;
    novo->prox= NULL;
    if (!fila->frente) fila->frente = novono;
    if (fila->tras) fila->tras->prox= novono;
    fila->tras = novono;
}

int desinfileirar(struct fila* fila) {
    if (!fila->frente) return -1;
    int cpf = fila->fila>frente->cpf;
    struct no* temp = fila->front;
    fila->frente = fila->frente->prox;
    free(temp);
    return cpf;
}

void listafila(struct Fila* fila) {
    struct no* a = fila->frente;
    while (current) {
        printf("%d ", a->cpf);
        a = a->prox;
    }
    printf("\n");
}

int main() {
    struct Fila* fila = criarfila();
    int escolha, cpf;

    while (1) {
        printf("1. Inserir CPF\n2. Listar CPFs\n3. Remover CPF\n4. Sair\nEscolha: ");
        scanf("%d", &choice);

        switch (escolha) { 
            case 1:
                printf("CPF: ");
                scanf("%d", &cpf);
                enfileirar(fila, cpf);
                printf("CPF inserido.\n");
                break;

            case 2:
                listafila(fila);
                break;

            case 3:
                cpf = desinfileirar(fila);
                if (cpf != -1) printf("CPF removido: %d\n", cpf);
                break;

            case 4:
                exit(0);

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

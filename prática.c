#include <stdio.h>
#include <stdlib.h>
    struct no{ 
        int valor; 
        struct no *prox; 
    }; 
    struct lista{ 
        struct no *inicio; 
        struct no *fim; 
        int tam; 
    }; 
    
int main()
{
    void iniciarlista (lista *L) { 
        L->inicio= NULL; 
         L->fim= NULL;
          L->tam= 0;
    } 
    Inserirlistavazia(lista *L, int x) {
        struct no novo; 
        novo = (no*) malloc (sizeof(no))
       novo -> valor = x; 
       novo -> prox = NULL; 
       inicio -> prox = novo; 
       fim -> prox = novo; 
       L -> tam ++; 
    } 
    
    Inseririnicio (lista *L, int y) { 
        struct no *novo; 
        novo = (struct no*) malloc (sizeof (struct no)); 
        
        novo -> valor=y; 
        novo -> prox = inicio -> prox; 
        inicio -> prox = novo; 
        tam++; 
    } 
    
    Inserirfim (lista *L, int y) { 
        struct no *novo; 
        novo = (struct no*) malloc (sizeof (struct no)); 
        novo -> valor = y; 
        fim -> prox = novo; 
        novo -> prox = NULL; 
        L -> fim -> prox = novo; 
    }

    return 0;
}

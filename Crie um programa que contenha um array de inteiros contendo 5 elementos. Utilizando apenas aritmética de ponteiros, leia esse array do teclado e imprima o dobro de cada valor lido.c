#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Crie um programa que contenha um array de inteiros contendo 5 elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

int main()
{
    setlocale (LC_ALL, "portuguese"); 
    int vet[5]; 
    int *p; 
    p=vet; 
    
    for (int i=0; i<5; i++) { 
        scanf ("%d",p); 
        p++;       
        for (int i=0; i<5; i++) { 
    printf("O dobro do valor é:%.d\n", *p*2);
    p++; 
             } 
    } 
    return 0;
}
 

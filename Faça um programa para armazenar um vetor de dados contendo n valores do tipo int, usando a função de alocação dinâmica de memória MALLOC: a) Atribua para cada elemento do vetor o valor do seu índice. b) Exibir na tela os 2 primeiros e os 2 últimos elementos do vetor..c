#include <stdio.h>
#include <stdlib.h>
//Faça um programa para armazenar um vetor de dados contendo n valores do tipo int,
//usando a função de alocação dinâmica de memória MALLOC:
//a) Atribua para cada elemento do vetor o valor do seu índice.
//b) Exibir na tela os 2 primeiros e os 2 últimos elementos do vetor.

int main(){ 
    
    int *ptr, i;
   
    ptr = (int*)calloc(2, sizeof(int));
   
    for(i = 0 ; i < 2; i++){
       ptr[i] = i;
     }
     
    for(i = 0 ; i < 2; i++){
       if(i <= 2 || i > 2)
            printf("%d ", ptr[i]);
    }
     for(i = 0 ; i < 2; i++){
       ptr[i] = i;
    }
     
    for(i = 0 ; i < 2; i++){
       if(i <= 2 || i > 2)
       printf("%d ", ptr[i]);
    }
   
    free(ptr);
    return 0;
}

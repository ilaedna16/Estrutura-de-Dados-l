#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente memória para esse vetor.
//Em seguida leia os elementos desse vetor, imprima a média dos elementos presentes no vetor.

int main () { 
        setlocale (LC_ALL, "portuese"); 

int *p; 
int n, med;
     printf ("Digite o tamanho do vetor:\n"); 
     scanf ("%d", &n); 
    p = (int*) malloc (n *sizeof (int)); 
      for (int i=0; i<n;i++){ 
     scanf ("%d", &p[i]); 
    med+= p[i];  
    med=med/n; 
     printf ("A média é:%.d",med);
    free(p); 
      } 
return 0; 
}

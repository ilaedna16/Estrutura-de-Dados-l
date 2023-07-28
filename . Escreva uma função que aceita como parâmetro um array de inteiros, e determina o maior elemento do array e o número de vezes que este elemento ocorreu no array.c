#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva uma função que aceita como parâmetro um array de inteiros, e determina o
///maior elemento do array e o número de vezes que este elemento ocorreu no array. Por
//exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
//função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando
//que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.

int max=0, repet=0; 

void veri(int *element, int num) 
{ 
int i; 
int max=0, repet=0;
max=element[0];

	for (i=0; i<num; i++) { 
	if (max<=element[i])
	{ 
	max=element[i]; 
	}
	
	   }
	   for (i=0; i<num; i++) { 
	   repet++; 
} 
}
void main () 
{ 
    setlocale (LC_ALL, "portuguese"); 
	int n; 
	int j=0; 
	
	printf ("Digite a quantidade de N números para a sua lista:\n"); 
	scanf ("%d", &n); 
	
	int lista[n]; 
	for (j=0; j<n; j++) { 
	printf ("\nDigite o número %d:\n", j+1); 
	scanf ("%d", &lista[j]); 
} 
	veri(lista, n); 
	printf ("\nNúmerode maior valor:%d\n", max); 
	printf ("Este número se repetiu %d vez(es)\n", repet);
	 system("pause");
}

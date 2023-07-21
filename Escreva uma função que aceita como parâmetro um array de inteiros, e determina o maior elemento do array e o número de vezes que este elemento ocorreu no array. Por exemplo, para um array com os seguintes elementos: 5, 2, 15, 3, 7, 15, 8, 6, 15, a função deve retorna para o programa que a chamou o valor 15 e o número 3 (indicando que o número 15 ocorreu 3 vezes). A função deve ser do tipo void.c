#include <stdio.h>
#include <stdlib.h>
//Escreva uma função que aceita como parâmetro um array de inteiros, e determina o
//maior elemento do array e o número de vezes que este elemento ocorreu no array. Por
//exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
//função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando
//que o número 15 ocorreu 3 vezes). A função deve ser do tipo void. 

void ver(int *elementos, int num_elementos) {
	int j;
		int vmaximo=0, repet=0; 
		vmaximo = elementos[0]; 
	 
		for (j=0; j<num_elementos; j++) { 
		if (vmaximo<=elementos[j]) { 
		vmaximo = elementos[j];
		
	}
    	}
    	for (j=0; j<num_elementos; j++) { 
    		if (vmaximo<=elementos[j]) {
			repet++; 
		}
		 }

        main () {
		int n; 
		int i=0;
		printf ("Olá digite a quantidade de números para a sua lista:\n"); 
		scanf ("%d", &n); }

		int lista[n]; 
			for (i=0; i<n; i++) { 
			scanf ("%d", &lista[i]); 
		 
	}
	
	ver(lista, n);
	
	printf ("\n Numero de maior valor!:%.d\n",vmaximo); 
        
return 0; 
}

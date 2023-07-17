#include<stdio.h> 
#include<locale.h>


	int main () 
	{ 
		setlocale (LC_ALL, "portuguese"); 
	int i, x; 
	float matriz[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
		for (i=0; i<3; i++) { 
			for (x=0; x<3; x++) { 
			
			printf ("%p\n",&matriz[i][x]); 
			}
		}
		putchar('\n');
	
	return 0; 
	}

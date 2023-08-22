#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto
//contendo o texto do arquivo de entrada, mas com a vogal ‘a’ substituída por ‘*’. 


int main()
{
    
    FILE *A, *B;
    char letra; 
    
    A= fopen ("A.txt", "r"); 
    B= fopen ("B.txt", "w"); 
        while (fscanf (A, "%c", letra)!= EOF) {
           if (letra == 'a' || letra == 'A') { 
               letra= '*'; 
           } 
           fprintf (B, "%c", letra); 
        } 
        fclose (A); 
        fclose (B); 
    return 0;
}

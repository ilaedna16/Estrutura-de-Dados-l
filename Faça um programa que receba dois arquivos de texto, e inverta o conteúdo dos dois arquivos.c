#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba dois arquivos de texto, e inverta o conteúdo dos dois
//arquivos.

int main()
{
    FILE *A, *B, *C; 
    char texto; 
    A= fopen ("A.txt", "r"); 
    C= fopen ("C.txt", "w"); 
        while (fscanf (A, "%c", &texto)!= EOF) {
            fprintf (C, "%c", texto);  
        } 
        fclose (A); 
        fclose (C); 
        B= fopen ("B.txt", "r"); 
        A= fopen ("A.txt", "w");
        
        while (fscanf (B, "%c", &texto)!= EOF) {
            fprintf (B, "%c", texto); 
        } 
        fclose (B); 
        fclose (A); 
    
        C= fopen ("C.txt", "r"); 
        B= fopen ("B.txt", "w");
        while (fscanf (C, "%c", &texto)!= EOF) {
            fprintf (B, "%c", texto); 
            
             fclose (B); 
             fclose (C); 
            
                 remove ("c.txt");

}        
    return 0;
}

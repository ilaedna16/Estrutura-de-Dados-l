#include <stdio.h>
#include <stdlib.h> 
//Faça um programa que receba dois arquivos do usuário e crie um terceiro arquivo
//com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do
//conteúdo do segundo).

int main()
{
    FILE *a, *b, *c; 
    char nome[50]; 
    a= fopen ("a.txt", "r");
    c= fopen ("c.txt", "w"); 
    while (fscanf (a, "%c",&nome)!= EOF) { 
        fprintf (c, "%c", nome); 
    } 
        fclose (a); 
        fclose (c); 
         b= fopen ("b.txt", "r"); 
                 c= fopen ("c.txt", "a"); 
                     while (fscanf (b, "%c", nome)!= EOF) { 
                      fprintf (c, "%c", nome); 
                     } 
                           fclose (b);
                           fclose (c); 
    return 0;
} 

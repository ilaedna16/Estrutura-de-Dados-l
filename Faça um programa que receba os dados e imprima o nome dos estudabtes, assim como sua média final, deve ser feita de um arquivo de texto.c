#include <stdio.h>

//Escreva um programa que receba os dados de três estudanteds e imprima na tela o nome dos estudantes que foram aprovados, 
//assim como sua média final. Cada estudante possui um nome e três notas, referente a cada unidade da disciplina,
//a leitura dos dados deve ser feita de um arquivo de texto. 

	typedef struct { 
	char nome[50]; 
	float n1; 
	float n2; 
	float n3; 
		} estudante;
int main()
{
      estudante e1; 
       estudante e2;
        estudante e3;
             estudante v[3]= {e1, e2, e3};
             int i;
			 FILE *file = fopen("./estudantes.txt", "r");    //abrindo o fopen somente para leitura
             printf ("Informe os dados dos estudantes:\n"); 
             for (i=0; i<3; i++) { 
             fscanf ( file "%s %f %f %f", &v[i].nome, &v[i].n1, &v[i].n2, &v[i].n3); 
			 }
			  for (i=0; i<3; i++) { 
			  float media= (v[i].n1 + v[i].n2 + v[i].n3)/3; 
			  if (media >= 7.0) { 
			   	  printf ("%s: %.2f\n", v[i].nome, media); 
			   }  
			   
			} 
			fclose (file); 
} 
   

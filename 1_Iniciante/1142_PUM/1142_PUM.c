/*
   Uri 1142 - PUM

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int linhas, i, cont = 1;

        scanf("%d", &linhas);

        for(i = 0; i < linhas; i++) {

                printf("%d %d %d PUM\n", cont, cont+1, cont+2);

                cont = cont + 4;

        }

        return 0;
}

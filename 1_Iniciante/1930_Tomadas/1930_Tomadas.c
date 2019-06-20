/*
   Uri 1930 - Tomadas

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int tomadas[4], i, maximo = 0;

        for(i = 0; i < 4; i++) {

                scanf("%d", &tomadas[i]);

                maximo += (tomadas[i] - 1);

        } // End For

        printf("%d\n", maximo + 1);

} // End Main

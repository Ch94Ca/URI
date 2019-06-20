/*
 *   Uri 1172 - Substituição Em Vetor
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int i, x[10];

        for(i = 0; i < 10; i++) {

                scanf("%d", &x[i]);

        } // End For

        for(i = 0; i < 10; i++) {

                if(x[i] <= 0) {

                        x[i] = 1;

                } // End For

                printf("X[%d] = %d\n", i, x[i]);

        } // End For

        return 0;

} // End Main

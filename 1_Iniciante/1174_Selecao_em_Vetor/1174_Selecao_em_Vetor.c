/*
 *   Uri 1174 - Selecao em Vetor
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        double a[100];
        int i;

        for(i = 0; i < 100; i++) {

                scanf("%lf", &a[i]);

                if(a[i] <= 10) {

                        printf("A[%d] = %.1lf\n", i, a[i]);

                } // End If

        } // End For

        return 0;

} // End Main

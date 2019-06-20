/*
 *   Uri 1173 - Preenchimento de Vetor I
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int i, n[11];

        scanf("%d", &n[0]);

        for(i = 1; i <=10; i++) {

                n[i] = n[i-1] * 2;

        } // End For

        for(i = 0; i < 10; i++) {

                printf("N[%d] = %d\n", i, n[i]);

        } // End For

        return 0;

} // End Main

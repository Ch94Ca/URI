/*
 *   Uri 1175 - Troca em Vetor
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int i, n[20];

        for(i = 19; i >= 0; i--) {

                scanf("%d", &n[i]);

        } // End For

        for(i = 0; i < 20; i++) {

                printf("N[%d] = %d\n", i, n[i]);

        } // End For

        return 0;

} // End Main

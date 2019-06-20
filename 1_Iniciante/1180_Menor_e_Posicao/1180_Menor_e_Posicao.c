/*
 *   Uri 1180 - Menor e Posicao
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int n, i, menor = 9999, indiceMenor;

        scanf("%d", &n);

        int x[n];

        for(i = 0; i < n; i++) {

                scanf("%d", &x[i]);

                if(x[i] < menor) {

                        menor = x[i];
                        indiceMenor = i;

                } // End If

        } // End For

        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", indiceMenor);

        return 0;

} // End Main

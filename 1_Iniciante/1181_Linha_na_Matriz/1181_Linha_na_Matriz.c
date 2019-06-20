/*
 *   URI 1181 - Linha na Matriz
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

        double matriz[12][12], resultado = 0;
        int linha, i, j;
        char op;

        scanf("%d %c", &linha, &op);

        for(i = 0; i < 12; i++) {

                for(j = 0; j < 12; j++) {

                        scanf("%lf", &matriz[i][j]);

                } // End For

        } // End For

        switch(op) {

        case 's': case 'S':

                for(i = 0; i < 12; i++) {

                        resultado += matriz[linha][i];

                } // End For

                break;

        case 'm': case 'M':

                for(i = 0; i < 12; i++) {

                        resultado += matriz[linha][i];

                } // End For

                resultado /= 12;

                break;

        } // End Switch

        printf("%.1lf\n", resultado);

        return 0;

} // End Main

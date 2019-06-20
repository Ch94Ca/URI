/*
   Uri 1160 - Crescimento Populacional

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int Anos(int pA, int pB, float g1, float g2){

        int anos = 0;

        while(pA <= pB) {

                pA += (pA * g1) / 100;
                pB += (pB * g2) / 100;

                anos++;

                if(pA > pB || anos > 100) {

                        break;

                } // End if

        } // End while

        return anos;

} // End Anos

int main(void){

        int pA, pB, vezes;
        float g1,g2;

        scanf("%d", &vezes);

        while(vezes--) {

                scanf("%d %d %f %f", &pA, &pB, &g1, &g2);

                if(Anos(pA, pB, g1, g2) > 100) {

                        puts("Mais de 1 seculo.");

                }else{

                        printf( "%d anos.\n", Anos(pA, pB, g1, g2) );

                } // End If

        } // End While

        return 0;
} // End Main

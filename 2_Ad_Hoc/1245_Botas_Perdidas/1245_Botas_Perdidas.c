/*
 *   Uri 1245 - Botas Perdidas
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int nBotas;

        while(scanf("%d", &nBotas) != EOF) {

                char ladoPe;
                int botas[31][2] = {{0},{0}}, numero, pares = 0, i;

                for(i = 0; i < nBotas; i++) {

                        scanf("%d  %c", &numero, &ladoPe);

                        switch(ladoPe) {

                        case 'd': case 'D':

                                botas[numero - 30][0] += 1;
                                break;

                        case 'e': case 'E':

                                botas[numero - 30][1] += 1;
                                break;

                        } // End Switch

                } // End For

                for(i = 0; i <= 30; i++) {

                        if(botas[i][0] < botas[i][1]) {

                                pares += botas[i][0];

                        }else{

                                pares += botas[i][1];

                        } // End If

                } // End For

                printf("%d\n", pares);

        } // End While

        return 0;

} // End Main

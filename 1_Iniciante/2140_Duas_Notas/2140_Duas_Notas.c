/*
   Uri 2140 - Duas Notas

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int TrocoPossivel(int compra, int total){

        int troco, i, cont;
        int combinacoes[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
        int notas[6] = {2, 5, 10, 20, 50, 100};

        troco = total - compra;

        for(i = 0; i < 15; i++) {

                if(troco == combinacoes[i]) {

                        return 1;

                }

        } // End For

        return 0;

} // End TrocoPossivel

int main(void)
{
        int compra, total, x;

        while(1) {

                scanf("%d %d", &compra, &total);

                if(compra == 0 && total == 0) {

                        return 0;

                } // End If

                if(TrocoPossivel(compra, total)) {

                        puts("possible");

                }else{

                        puts("impossible");

                } // End If

        } // End While

} // End Main

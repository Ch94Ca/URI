/*

   Uri 1042 - Sort Simples

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int valorA,valorB,valorC,valorAi,valorBi,valorCi,valorAux;

        scanf("%d %d %d", &valorA,&valorB,&valorC);

        // variaveis para guardar os valores na ordem em que foram lidos.
        valorAi=valorA;
        valorBi=valorB;
        valorCi=valorC;

        if(valorB<valorA && valorB<valorC) {

                valorAux=valorA;
                valorA=valorB;
                valorB=valorAux;

        }

        if(valorC<valorA && valorC<valorB) {

                valorAux=valorA;
                valorA=valorC;
                valorC=valorAux;
        }

        if(valorC<valorB) {

                valorAux=valorB;
                valorB=valorC;
                valorC=valorAux;

        }
        // Saida com os valores ordenados de forma crescente.
        printf("%d\n%d\n%d\n\n", valorA,valorB,valorC);

        // Saida com os valores na ordem em que foram lidos.
        printf("%d\n%d\n%d\n", valorAi,valorBi,valorCi);

        return 0;
}

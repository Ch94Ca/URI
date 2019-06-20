/*
   Uri 1013 - O Maior

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int valorA, valorB, valorC, valorGuardado;

        scanf("%d %d %d", &valorA, &valorB, &valorC);

        if(valorB > valorA && valorB > valorC) {
                valorGuardado = valorA;
                valorA = valorB;
                valorB = valorGuardado;
        }

        if(valorC > valorA && valorC > valorB) {
                valorGuardado = valorA;
                valorA = valorC;
                valorC = valorGuardado;
        }
        if(valorC > valorB) {
                valorGuardado = valorC;
                valorB = valorC;
                valorC = valorGuardado;
        }

        printf("%d eh o maior\n", valorA);

        return 0;
}

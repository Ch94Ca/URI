/*
   Uri 1017 - Gasto de Combustivel

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float tempo, velocidade, distancia, combustivelGasto;

        scanf("%f %f", &tempo, &velocidade);

        distancia = velocidade * tempo;

        combustivelGasto = distancia / 12;

        printf("%.3f\n", combustivelGasto);


        return 0;
}

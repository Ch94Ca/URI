/*
   Uri 1014 - Consumo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int distanciaTotal;
        float combustivelGasto, consumo;

        scanf("%d %f", &distanciaTotal, &combustivelGasto);

        consumo = distanciaTotal / combustivelGasto;

        printf("%.3f km/l\n", consumo);


        return 0;
}

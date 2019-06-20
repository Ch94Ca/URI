/*

   Uri 1043 - Triangulo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        float ladoA,ladoB,ladoC;

        scanf("%f %f %f",&ladoA,&ladoB,&ladoC);

        // Condicoes de existencia de um triangulo
        // | lado B - lado C | < lado A < lado B + lado C
        // | lado A - lado C | < lado B < lado A + lado C
        // | lado A - lado B | < lado C < lado A + lado B
        if(ladoA>(abs(ladoB)-abs(ladoC)) && ladoA<(ladoB+ladoC) &&
           ladoB>(abs(ladoA)-abs(ladoC)) && ladoB<(ladoA+ladoC) &&
           ladoC>(abs(ladoA)-abs(ladoB)) && ladoC<(ladoA+ladoB)) {

                // Perimetro do tri�gulo: lado A + lado B + lado C
                printf("Perimetro = %.1f\n",ladoA+ladoB+ladoC);

        }else{

                // Area do trapezio: ((base A + Base B) / 2) * Altura.
                printf("Area = %.1f\n",((ladoA+ladoB) / 2) * ladoC);

        }

        return 0;
}

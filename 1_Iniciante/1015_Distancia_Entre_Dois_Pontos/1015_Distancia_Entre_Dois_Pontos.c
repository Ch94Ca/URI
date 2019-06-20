/*
   Uri 1015 - Dist�ncia Entre Dois Pontos

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        double x1, x2, y1, y2, distancia;

        scanf("%lf %lf", &x1, &y1);
        scanf("%lf %lf", &x2, &y2);

        distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

        printf("%.4lf\n", distancia);

        return 0;
}

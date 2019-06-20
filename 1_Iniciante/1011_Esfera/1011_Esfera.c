/*
   Uri 1011 - Esfera

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        double raio, volume;

        scanf("%lf", &raio);

        /*Volume = (4/3) * pi(3.14159...) * raio elevado ao cubo*/
        volume = (4 / 3.0) * 3.14159 * pow(raio,3);

        printf("VOLUME = %.3lf\n", volume);

        return 0;
}

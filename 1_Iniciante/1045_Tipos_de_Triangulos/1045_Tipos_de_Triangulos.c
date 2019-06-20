/*
   Uri 1045 - Tipos de Triangulos

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        double a, b, c, store;
        char tipoTriangulo[25];

        scanf("%lf %lf %lf", &a, &b, &c);

        if(b > a && b > c) {
                store = a;
                a = b;
                b = store;
        }
        if(c > b && c > a) {
                store = a;
                a = c;
                c = store;
        }
        if(c > b) {
                store = b;
                b = c;
                c = store;

        }

        if(a >= (b + c)) {
                puts("NAO FORMA TRIANGULO");
                return 0;
        }

        if(pow(a,2) == (pow(b,2) + pow(c,2))) {
                puts("TRIANGULO RETANGULO");
        }
        if(pow(a,2) >(pow(b,2) + pow(c,2))) {
                puts("TRIANGULO OBTUSANGULO");
        }
        if(pow(a,2) < (pow(b,2) + pow(c,2))) {
                puts("TRIANGULO ACUTANGULO");
        }

        if(a == b && a == c) {
                puts("TRIANGULO EQUILATERO");
        }else if(a == b || a == c || b == c) {
                puts("TRIANGULO ISOSCELES");
        }


        return 0;

}

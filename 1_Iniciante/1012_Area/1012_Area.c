/*
   Uri 1012 - Area

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        float a, b, c;
        float areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

        scanf("%f %f %f", &a, &b, &c);

        // Area de Triangulos = (base * base) / 2
        areaTriangulo = (a * c) / 2;
        // Area de Circulo = Pi(3.14159...) * raio elevado ao quadrado
        areaCirculo = 3.14159 * pow(c,2);
        // Area de Trapezio = ((base maior * base menor) * altura) / 2
        areaTrapezio = ((a + b) * c) / 2;
        // Area de Quadrado = lado * lado
        areaQuadrado = b * b;
        // Area de Retangulo = lado * lado
        areaRetangulo = a * b;

        printf("TRIANGULO: %.3f\n", areaTriangulo);
        printf("CIRCULO: %.3f\n", areaCirculo);
        printf("TRAPEZIO: %.3f\n", areaTrapezio);
        printf("QUADRADO: %.3f\n", areaQuadrado);
        printf("RETANGULO: %.3f\n", areaRetangulo);

        return 0;
}

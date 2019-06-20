/*
   Uri 1002 - Area do CIrculo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */
#include <stdio.h>

int main (void)
{
        double r, a, n;

        scanf("%lf", &r);
        a = 3.14159 * r * r; /*Area = pi(3,14159...) * raio ao quadrado*/
        printf("A=%.4lf\n", a);

        return 0;

}

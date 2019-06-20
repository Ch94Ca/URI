/*
   Uri 2234 - Cachorros-Quentes

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main (void)
{
        double consumidos, participantes;
        double media;

        scanf("%lf %lf", &consumidos, &participantes);

        media = consumidos / participantes;

        printf("%.2lf\n", media);

        return 0;
}

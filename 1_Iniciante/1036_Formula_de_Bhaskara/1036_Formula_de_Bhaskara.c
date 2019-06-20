/*
Uri 1036 - Formula de Bhaskara

Autor: Carlos Henrique Silva Correia de Araujo
Aluno de Engenharia de Computacao - UFPB (1° Semestre)

*/

#include <stdio.h>
#include <math.h>

int main (void)
{
float coefcA, coefcB, coefcC, delta, raiz1, raiz2;

    scanf("%f %f %f", &coefcA, &coefcB, &coefcC);

    //Delta = coeficiente B elevado ao quadrado -4 * coeficiente A * coeficiente C
    delta = (coefcB * coefcB) - 4 * coefcA * coefcC;

    //Raizes = -(coneficiente B) +- raiz quadrada de delta / 2 * coeficiente A
    raiz1 = (-coefcB + sqrt(delta)) / (2 * coefcA);
    raiz2 = (-coefcB - sqrt(delta)) / (2 * coefcA);

    //As raizes nao podem ser calculadas se delta < 0 ou coeficiente A = 0
    if (delta < 0 || coefcA ==0)
    {
        puts("Impossivel calcular");
    }
    else
    {
        printf("R1 = %.5f\n", raiz1);
        printf("R2 = %.5f\n", raiz2);
    }

return 0;
}

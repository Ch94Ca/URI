/*
   Uri 1019 - Conversao de Tempo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main (void)
{
        int entradaSegundos, horas, minutos, segundos;

        scanf("%d", &entradaSegundos);

        horas = entradaSegundos / 3600;

        minutos = (entradaSegundos % 3600) / 60;

        segundos = (entradaSegundos % 3600) % 60;

        printf("%d:%d:%d\n",horas,minutos,segundos);

        return 0;
}

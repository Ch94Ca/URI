/*
   Uri 1067 - Numeros Impares

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int x, i;

        scanf("%d", &x);

        for(i=1; i<=x; i=i+2)
                printf("%d\n", i);


        return 0;
}

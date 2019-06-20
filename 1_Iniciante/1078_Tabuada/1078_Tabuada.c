/*
   Uri 1078 - Tabuada

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int i, numeroX;

        scanf("%d", &numeroX);

        for(i=1; i<=10; i++) {
                printf("%d x %d = %d\n", i, numeroX, i*numeroX);
        }

        return 0;
}

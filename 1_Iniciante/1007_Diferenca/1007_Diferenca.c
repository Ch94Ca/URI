/*
   Uri 1007 - Diferenca

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int a, b, c, d, res;

        scanf("%d %d %d %d", &a, &b, &c, &d);

        res = (a * b) - (c * d);

        printf("DIFERENCA = %d\n", res);

        return 0;
}

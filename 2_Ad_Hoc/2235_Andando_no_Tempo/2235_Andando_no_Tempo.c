/*
   Uri 2235 - Andando no Tempo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if(a == b || a == c || b == c) {
                puts("S");
        }else if(a+b == c || a+c == b ||b+c == a) {
                puts("S");
        } else {
                puts("N");
        }


        return 0;
}

/*
   Uri 1059 - Numeros Pares

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int i;

        for(i = 0; i<= 98; i + 2) {
                i = i + 2;
                printf("%d\n", i);
        }

        return 0;
}

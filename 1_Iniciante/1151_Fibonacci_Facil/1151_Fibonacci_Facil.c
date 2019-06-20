/*
   Uri 1151 - Fibonacci Facil

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        unsigned int quantidade, numero, i;
        unsigned long fibonacci[90] = {0,1,1};

        scanf("%d", &quantidade);

        for(i = 2; i < quantidade; i++)

                fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

        for (i = 0; i < quantidade; i++) {

                printf("%ld\n", fibonacci[i]);

                if ( i != quantidade -1)
                  printf(" ");

        } // End For

        printf("\n");

        return 0;
}

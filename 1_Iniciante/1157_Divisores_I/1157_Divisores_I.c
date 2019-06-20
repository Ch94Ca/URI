/*
   Uri 1157 - Divisores

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int valor, i;

        scanf("%d", &valor);

        for(i=1; i<=valor; i++) {

                if(valor%i == 0)
                        printf("%d\n", i);

        } // End For

        return 0;
}

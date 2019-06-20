/*
   Uri 1164 - Numero Perfeito

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int quantidade, valor, soma, i, j;

        scanf("%d", &quantidade);

        for(i=0; i<quantidade; i++) {

                scanf("%d", &valor);

                soma=0;

                for(j=1; j<valor; j++) {

                        if(valor%j == 0)

                                soma = soma+j;

                } // End For


                if(valor == soma)

                        printf("%d eh perfeito\n", valor);

                else

                        printf("%d nao eh perfeito\n", valor);



        } // End For

        return 0;
}

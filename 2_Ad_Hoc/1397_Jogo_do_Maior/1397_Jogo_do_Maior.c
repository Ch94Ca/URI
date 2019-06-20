/*
   Uri 1397 - Jogo do Maior

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int rodadas, i, a, b, pontosA, pontosB;

        scanf("%d", &rodadas);

        while (rodadas != 0) {

                pontosA = 0;
                pontosB = 0;

                for(i = 0; i < rodadas; i++) {

                        scanf("%d", &a);
                        scanf("%d", &b);

                        if(a > b && a != b)
                                pontosA++;
                        else if(b > a && b != a)
                                pontosB++;

                }

                printf("%d %d\n", pontosA, pontosB);

                scanf("%d", &rodadas);

        }

        return 0;
}

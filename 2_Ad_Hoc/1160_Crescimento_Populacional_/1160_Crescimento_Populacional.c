/*
   Uri 1160 - Crescimento Populacional

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int pA, pB, vezes, anos, aFinal, bFinal, a, b, c;
        float g1,g2;

        scanf("%d",&vezes);

        for(a = 0; a < vezes; a++) {
                scanf("%d %d %f %f", &pA, &pB, &g1, &g2);
                b = pA;
                c = pB;
                anos = 0;
                while(aFinal <= bFinal) {
                        aFinal = b + b *(g1 / 100);
                        bFinal = c + c *(g2 / 100);
                        b = aFinal;
                        c = bFinal;
                        anos++;
                        if(anos > 100) {
                                break;
                        }
                }
                if(anos > 100) {
                        printf("Mais de 1 seculo.\n");
                }
                else{
                        printf("%d anos.\n",anos);
                }
                aFinal=0;
                bFinal=0;
        }

        return 0;
}

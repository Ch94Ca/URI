/*
   Uri 1165 - Numero Primo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int i,j,vezes,x, c;

        scanf("%d", &vezes);

        for(i=1; i<=vezes; i++) {
                scanf("%d", &x);
                c=0;
                for(j=1; j<=x; j++) {
                        if(x%j==0) {
                                c++;
                        }
                }
                if(c==2) {
                        printf("%d eh primo\n", x);
                }else{
                        printf("%d nao eh primo\n", x);
                }
        }

        return 0;
}

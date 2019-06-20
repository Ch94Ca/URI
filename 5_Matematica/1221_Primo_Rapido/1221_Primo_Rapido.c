/*
   Uri 1221 - Primo Rapido

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Primo(int x){

        int i, c = 0;

        for(i = 2; i <= sqrt(x); i++) {

                if(x % i == 0) {
                        c++;
                        break;
                } // End If

        } // End for

        if(c == 0) {
                return 1;
        }else{
                return 0;
        } // End if

} // End Primo

int main(void){

        int vezes, x, i;

        scanf("%d", &vezes);

        for (i = 0; i < vezes; i++) {

                scanf("%d", &x);

                switch(Primo(x)) {

                case 1:
                        puts("Prime");
                        break;
                case 0:
                        puts("Not Prime");
                        break;

                } // End Switch
                
        } // End For

        return 0;
}

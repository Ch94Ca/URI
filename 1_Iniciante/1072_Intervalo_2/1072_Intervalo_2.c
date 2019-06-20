/*
   Uri 1072 - Intervalo 2

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int quantidade, valor, in=0, out=0, i;

        scanf("%d", &quantidade);

        for(i=0; i<quantidade; i++) {

                scanf("%d", &valor);

                if(valor >= 10 && valor <= 20)
                        in++;
                else
                        out++;

        } // End for

        printf("%d in\n",in);
        printf("%d out\n", out);
        
        return 0;
}

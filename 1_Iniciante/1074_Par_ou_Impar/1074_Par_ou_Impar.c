/*
   Uri 1074 - Par ou Impar

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

                if(valor == 0)
                        printf("NULL\n");

                if(valor % 2 == 0 && valor != 0)
                        printf("EVEN ");
                else if(valor != 0)
                        printf("ODD ");

                if(valor > 0 && valor != 0)
                        printf("POSITIVE\n");
                else if(valor != 0)
                        printf("NEGATIVE\n");

        } // End for

        return 0;
}

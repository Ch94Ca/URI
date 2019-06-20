/*

   Uri 1044 - Multiplos

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int valorA,valorB;

        scanf("%d %d",&valorA,&valorB);

        if(valorB>valorA) {

                if(valorB%valorA==0) {

                        puts("Sao Multiplos");

                }else{

                        puts("Nao sao Multiplos");

                }

        }else if(valorA%valorB==0) {

                puts("Sao Multiplos");

        }else{

                puts("Nao sao Multiplos");

        }

        return 0;
}

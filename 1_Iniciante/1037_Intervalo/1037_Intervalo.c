/*
   Uri 1037 - Intervalo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float entrada;

        scanf("%f", &entrada);

        if(entrada >= 0 && entrada <= 25) {
                puts("Intervalo [0,25]");
        }else if(entrada > 25 && entrada <= 50 ) {
                puts("Intervalo (25,50]");
        }else if(entrada > 75 && entrada <= 100) {
                puts("Intervalo (75,100]");
        }else{
                puts("Fora de intervalo");
        }

        return 0;
}

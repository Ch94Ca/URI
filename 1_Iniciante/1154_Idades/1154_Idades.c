/*
   Uri 1154 - Idades

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float entrada, parcial=0, cont=0, media;

        scanf("%f", &entrada);

        while(entrada > 0) {
                if(entrada > 0) {
                        parcial = parcial + entrada;
                        cont = cont + 1;
                        scanf("%f", &entrada);
                }
        }

        media = parcial / cont;

        printf("%.2f\n", media);


        return 0;
}

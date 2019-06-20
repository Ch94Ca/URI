/*
   Uri 1005 - Media 1

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        double notaA, notaB, media;

        scanf("%lf %lf", &notaA, &notaB);

        /*Media = ((nota A + peso A) + (Nota B + Peso B)) / (Peso A + Peso B)*/
        media = ((notaA * 3.5) + (notaB * 7.5)) / 11;

        printf("MEDIA = %.5lf\n", media);

        return 0;
}

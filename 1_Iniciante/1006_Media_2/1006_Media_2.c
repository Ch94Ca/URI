/*
   Uri 1006 - Media 2

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float notaA, notaB, notaC, media;

        scanf ("%f %f %f", &notaA, &notaB, &notaC);

        //Media = ((Nota A + Peso A) + (Nota B + Peso B)...) / (Peso A + Peso B + ...)
        media = ((notaA * 2) + (notaB * 3) + (notaC * 5)) / 10;

        printf("MEDIA = %.1f\n", media);

        return 0;
}

/*

   Uri - 1040 - Media 3

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float nota1,nota2,nota3,nota4,nota5,media;

        scanf("%f %f %f %f", &nota1,&nota2,&nota3,&nota4);

        media = ((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1)) / (2+3+4+1);

        printf("Media: %.1f\n", media);

        if(media>=7.0) {

                puts("Aluno aprovado.");

        }else if(media<5.0) {

                puts("Aluno reprovado.");

        }else if(media>=5.0 && media<7.0) {

                puts("Aluno em exame.");
                scanf("%f", &nota5);

                printf("Nota do exame: %.1f\n", nota5);

                media = (media+nota5) / 2;

                if(media>=5.0) {
                        puts("Aluno aprovado.");
                }else{
                        puts("Aluno reprovado.");
                }

                printf("Media final: %.1f\n", media);
        }

        return 0;
}

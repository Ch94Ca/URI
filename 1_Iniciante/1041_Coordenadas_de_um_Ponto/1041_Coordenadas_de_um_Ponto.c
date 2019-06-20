/*

   Uri 1041 - Coordenadas de um Ponto

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        float pontoX,pontoY;

        scanf("%f %f", &pontoX,&pontoY);

        if(pontoX==0 && pontoY==0) {

                puts("Origem");

        }else if(pontoX==0 && pontoY!=0) {

                puts("Eixo Y");

        }else if(pontoX!=0 && pontoY==0) {

                puts("Eixo X");

        }else if(pontoX>0 && pontoY>0) {

                puts("Q1");

        }else if(pontoX<0 && pontoY>0) {

                puts("Q2");

        }else if(pontoX<0 && pontoY<0) {

                puts("Q3");

        }else if(pontoX>0 && pontoY<0) {

                puts("Q4");

        }

        return 0;
}

/*
 *   Uri 2356 - Bacteria I
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

        char bacteria[101];
        char resistencia[101];

        while(scanf("%s", bacteria) != EOF) {

                scanf("%s", resistencia);

                if(strstr(bacteria, resistencia)) {

                        puts("Resistente");

                }else{

                        puts("Nao resistente");

                } // End If

        } // End While

        return(0);

} // End Main

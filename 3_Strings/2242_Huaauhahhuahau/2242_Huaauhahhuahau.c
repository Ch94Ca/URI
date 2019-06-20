/*
 *   Uri 2242 - Huaauhahhuahau
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

        int i, j = 0;
        char risada[60], copiaRisada[60];

        scanf("%s", risada);

        for(i=0; risada[i]; i++){

                if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){

                        copiaRisada[j] = risada[i];
                        j++;

                } // End If

        } // End For

        copiaRisada[j] = '\0';

        for(i = 0, j = strlen(copiaRisada)-1; i < strlen(copiaRisada); i++, j--){

                if(copiaRisada[i] != copiaRisada[j]){

                        puts("N");
                        return 0;

                } // End If

        } // End For

        puts("S");

        return 0;

} // End Main

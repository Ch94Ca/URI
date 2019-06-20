/*
 *   Uri 2444 - Volume da TV
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

        int volume = 0, mudanca, vezes;

        scanf("%d", &volume);
        scanf("%d", &vezes);

        while(vezes--) {

                scanf("%d", &mudanca);

                volume += mudanca;

                if(volume > 100) volume = 100;

                if(volume < 0) volume = 0;

        } // End While

        printf("%d\n", volume);

        return 0;

} // End Main

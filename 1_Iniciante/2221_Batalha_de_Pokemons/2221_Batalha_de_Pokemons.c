/*
   Uri 2221 - Batalha de Pokemons

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int Golpe(int bonus, int ataque, int defesa, int nivel){

        int golpe = 0;

        golpe = (ataque + defesa) / 2;

        if(nivel % 2 == 0) {

                golpe += bonus;

        } // End if

        return golpe;

} // End Golpe

int main (void){

        int vezes, i;
        int bonus, statsJ1[4], statsJ2[4];

        scanf("%d", &vezes);

        for(i = 0; i < vezes; i++) {

                scanf("%d", &bonus);
                scanf("%d %d %d", &statsJ1[0], &statsJ1[1], &statsJ1[2]);
                scanf("%d %d %d", &statsJ2[0], &statsJ2[1], &statsJ2[2]);

                statsJ1[3] = Golpe(bonus, statsJ1[0], statsJ1[1], statsJ1[2]);

                statsJ2[3] = Golpe(bonus, statsJ2[0], statsJ2[1], statsJ2[2]);

                if(statsJ1[3] == statsJ2[3]) {

                        puts("Empate");

                }else if(statsJ1[3] > statsJ2[3]) {

                        puts("Dabriel");

                }else if(statsJ1[3] < statsJ2[3]) {

                        puts("Guarte");

                }


        } // End For

        return 0;
}

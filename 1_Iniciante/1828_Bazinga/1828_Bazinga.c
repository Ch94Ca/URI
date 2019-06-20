/*
 *   Uri 1828 - Bazinga
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LimpaString(char *str){

        memset(str, 0, strlen(str));

} // End LimpaString

int main(){

        int vezes, ganhador, caso = 1;
        char sheldon[10], raj[10];
        char opcoes[5][10] = {"pedra", // 0
                              "papel", // 1
                              "tesoura", // 2
                              "lagarto", // 3
                              "Spock"}; // 4

        scanf("%d", &vezes);

        /*

           pedra:
           ganha: tesoura, lagarto
           perde: papel, Spock
           papel:
           ganha: pedra, Spock
           perde: tesoura, lagarto
           tesoura:
           ganha: lagarto, papel
           perde: pedra,Spock
           lagarto:
           ganha: papel, Spock
           perde: tesoura, pedra
           Spock:
           ganha: pedra, tesoura
           perde: papel, lagarto

         */


        while(vezes--) {

                scanf("%s", sheldon);
                scanf("%s", raj);

                if (strstr(sheldon, opcoes[0])) {

                        if(strstr(raj, opcoes[2]) || strstr(raj, opcoes[3])) {

                                ganhador = 1;

                        }else{

                                ganhador = 2;

                        } // End If

                } // End If

                if (strstr(sheldon, opcoes[1])) {

                        if(strstr(raj, opcoes[0]) || strstr(raj, opcoes[4])) {

                                ganhador = 1;

                        }else{

                                ganhador = 2;

                        } // End If

                } // End If

                if (strstr(sheldon, opcoes[2])) {

                        if(strstr(raj, opcoes[3]) || strstr(raj, opcoes[1])) {

                                ganhador = 1;

                        }else{

                                ganhador = 2;

                        } // End If

                } // End If

                if (strstr(sheldon, opcoes[3])) {

                        if(strstr(raj, opcoes[1]) || strstr(raj, opcoes[4])) {

                                ganhador = 1;

                        }else{

                                ganhador = 2;

                        } // End If

                } // End If

                if (strstr(sheldon, opcoes[4])) {

                        if(strstr(raj, opcoes[0]) || strstr(raj, opcoes[2])) {

                                ganhador = 1;

                        }else{

                                ganhador = 2;

                        } // End If

                } // End If

                if (strstr(sheldon, raj)) {

                        ganhador = 3;

                } // End If

                printf("Caso #%d: ", caso);

                switch(ganhador) {

                case 1:
                        puts("Bazinga!");
                        break;
                case 2:
                        puts("Raj trapaceou!");
                        break;
                case 3:
                        puts("De novo!");
                        break;

                } // End Switch

                caso++;

                ganhador = 0;

                LimpaString(sheldon);
                LimpaString(raj);

        }// End While

        return 0;

} // End Main

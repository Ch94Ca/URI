/*
 *   Uri 1168 - LED
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int QuantidadeLED(char numero){

        switch(numero) {

        case '1':
                return 2;
                break;
        case '2': case '3': case '5':
                return 5;
                break;
        case '4':
                return 4;
                break;
        case '6': case '9': case '0':
                return 6;
                break;
        case '7':
                return 3;
                break;
        case '8':
                return 7;
                break;

        } // End Switch

} // End Quantidade LED

int main(void){

        int vezes, leds, i;
        char valores[102];

        scanf("%d", &vezes);

        while(vezes--){

          leds = 0;

          scanf("%s", valores);

          for(i = 0; i < strlen(valores); i++){

            leds += QuantidadeLED(valores[i]);

          } // End For

          printf("%d leds\n", leds);

        } // End While

        return 0;

} // End Main

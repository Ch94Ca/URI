/*

   Uri 1046 - Tempo de Jogo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int horaInicial,horaFinal,horaTotal;
        scanf("%d %d",&horaInicial,&horaFinal);

        if(horaInicial>horaFinal || horaInicial==horaFinal)
                horaTotal=(horaFinal+24)-horaInicial;
        else
                horaTotal=horaFinal-horaInicial;

        printf("O JOGO DUROU %d HORA(S)\n",horaTotal);

        return 0;
}

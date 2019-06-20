/*

   Uri 1047 - Tempo de Jogo com Minutos

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int horaInicial,minutoInicial,horaFinal,minutoFinal;
        int momentoInicial,momentoFinal,tempoJogo;

        scanf("%d %d %d %d",&horaInicial,&minutoInicial,&horaFinal,&minutoFinal);

        // Conversao do momento inicial do jogo em minutos
        momentoInicial=(horaInicial*60) + minutoInicial;

        // Conversao do momento final do jogo em minuto
        momentoFinal=(horaFinal*60) + minutoFinal;

        if(momentoInicial>momentoFinal || momentoInicial==momentoFinal)
                momentoFinal+=1440; // Adiciona 1440m(24 horas) ao momento final

        // Tempo total de jogo em minutos = momento final - momento inicial
        tempoJogo=momentoFinal-momentoInicial;

        //Saida convertendo o total em minutos para horas/minutos
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempoJogo/60,tempoJogo%60);

        return 0;
}

/*

   Uri 1020 - Idade em Dias

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int dias, resultado;

        scanf("%d", &dias);

        resultado = dias / 365;
        dias = dias % 365;

        printf("%d ano(s)\n", resultado);

        resultado = dias / 30;
        dias = dias % 30;

        printf("%d mes(es)\n", resultado);

        resultado = dias / 1;

        printf("%d dia(s)\n", resultado);

        return 0;

}

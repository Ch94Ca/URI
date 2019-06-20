/*
   Uri 2006 - Identificando o Chá

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int correto, resposta, resultado=0, i;

        scanf("%d", &correto);

        for (i=0; i <5; i++) {

                scanf("%d", &resposta);

                if(correto == resposta) {
                        resultado++;
                } // End if

        } //End For

        printf("%d\n", resultado);

}

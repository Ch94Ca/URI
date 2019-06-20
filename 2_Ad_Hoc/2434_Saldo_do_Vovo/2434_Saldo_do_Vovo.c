/*
 *   Uri 2434 - Saldo do Vovo
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

        int dias, saldo, movimentacao, menor;

        scanf("%d", &dias);
        scanf("%d", &saldo);

        menor = saldo;

        while(dias--) {

                scanf("%d", &movimentacao);

                saldo += movimentacao;

                if(saldo < menor) menor = saldo;

        } // End While

        printf("%d\n", menor);

        return 0;

} // End Main

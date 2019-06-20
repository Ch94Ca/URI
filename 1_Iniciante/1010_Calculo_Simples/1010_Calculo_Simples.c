/*
   Uri 1010 - Calculo Simples

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int codigo, unidades;
        float preco, total1, total2, totalf;

        scanf("%d %d %f", &codigo, &unidades, &preco);

        total1 = unidades * preco;

        scanf("%d %d %f", &codigo, &unidades, &preco);

        total2 = unidades * preco;

        totalf = total1 + total2;

        printf("VALOR A PAGAR: R$ %.2f\n", totalf);

        return 0;
}

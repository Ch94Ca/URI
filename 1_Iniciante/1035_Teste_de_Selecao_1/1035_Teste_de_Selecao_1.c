/*
   Uri 1035 - Teste de Selecao 1

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void)
{
        int valorA, valorB, valorC, valorD, somaCD, somaAB;

        scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);

        somaCD = valorC + valorD;
        somaAB = valorA + valorB;

        if(valorB > valorC && valorD > valorA && somaCD > somaAB && valorC > 0 &&
           valorD > 0 && valorA % 2 == 0)
        {
                puts("Valores aceitos");
        }else{
                puts("Valores nao aceitos");
        }

        return 0;
}

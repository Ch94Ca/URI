/*

   Uri 1018 -  Cedulas

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        double valor, valorDecimal;
        int notas, moedas;

        scanf("%lf", &valor);

        valorDecimal = valor -(int)valor;
        valorDecimal = valorDecimal * 100.1;

        puts("NOTAS:");

        notas = valor / 100;
        valor = (int)valor % 100;

        printf("%d nota(s) de R$ 100.00\n", notas);

        notas = valor / 50;
        valor = (int)valor % 50;

        printf("%d nota(s) de R$ 50.00\n", notas);

        notas = valor / 20;
        valor = (int)valor % 20;

        printf("%d nota(s) de R$ 20.00\n", notas);

        notas = valor / 10;
        valor = (int)valor % 10;

        printf("%d nota(s) de R$ 10.00\n", notas);

        notas = valor / 5;
        valor = (int)valor % 5;

        printf("%d nota(s) de R$ 5.00\n", notas);

        notas = valor / 2;
        valor = (int)valor % 2;

        printf("%d nota(s) de R$ 2.00\n", notas);

        notas = valor / 1;

        puts("MOEDAS:");

        printf("%d moeda(s) de R$ 1.00\n", notas);

        moedas = valorDecimal / 50;
        valorDecimal = (int)valorDecimal % 50;

        printf("%d moeda(s) de R$ 0.50\n", moedas);

        moedas = valorDecimal / 25;
        valorDecimal = (int)valorDecimal % 25;

        printf("%d moeda(s) de R$ 0.25\n", moedas);

        moedas = valorDecimal / 10;
        valorDecimal = (int)valorDecimal % 10;

        printf("%d moeda(s) de R$ 0.10\n", moedas);

        moedas = valorDecimal / 5;
        valorDecimal = (int)valorDecimal % 5;

        printf("%d moeda(s) de R$ 0.05\n", moedas);

        moedas = valorDecimal / 1;

        printf("%d moeda(s) de R$ 0.01\n", moedas);


        return 0;

}

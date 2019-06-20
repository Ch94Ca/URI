/*

   Uri 1018 -  Cedulas

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int valor, notas, resto;

        scanf("%d", &valor);

        printf("%d\n", valor);

        notas = valor / 100;
        valor = valor % 100;

        printf("%d nota(s) de R$ 100,00\n", notas);

        notas = valor / 50;
        valor = valor % 50;

        printf("%d nota(s) de R$ 50,00\n", notas);

        notas = valor / 20;
        valor = valor % 20;

        printf("%d nota(s) de R$ 20,00\n", notas);

        notas = valor / 10;
        valor = valor % 10;

        printf("%d nota(s) de R$ 10,00\n", notas);

        notas = valor / 5;
        valor = valor % 5;

        printf("%d nota(s) de R$ 5,00\n", notas);

        notas = valor / 2;
        valor = valor % 2;

        printf("%d nota(s) de R$ 2,00\n", notas);

        notas = valor / 1;
        valor = valor % 1;

        printf("%d nota(s) de R$ 1,00\n", notas);


        return 0;

}

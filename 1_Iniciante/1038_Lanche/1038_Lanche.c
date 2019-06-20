/*
   Uri 1038 - Lanche

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void)
{
        int codigo, quantidade;
        float valor, total;

        scanf("%d %d", &codigo, &quantidade);

        switch(codigo)
        {
        case 1:
                valor = 4.00;
                break;
        case 2:
                valor = 4.50;
                break;
        case 3:
                valor = 5.00;
                break;
        case 4:
                valor = 2.00;
                break;
        case 5:
                valor = 1.50;
        }

        total = valor * quantidade;

        printf("Total: R$ %.2f\n", total);

        return 0;
}

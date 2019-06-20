/*
   Uri 1009 - Salario com Bonus

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <string.h>

int main(void){

        double salario, vendas, salarioFinal, comissao;
        char nome[20];

        scanf("%s", &nome);
        scanf("%lf", &salario);
        scanf("%lf", &vendas);

        salarioFinal = salario + (vendas * 0.15);

        printf("TOTAL = R$ %.2lf\n", salarioFinal);

        return 0;
}

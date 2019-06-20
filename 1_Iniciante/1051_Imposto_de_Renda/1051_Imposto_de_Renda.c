/*
   Uri 1051 - Imposto de Renda

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        double salario, imposto;

        scanf("%lf", &salario);

        if(salario > 0 && salario <= 2000) {
                puts("Isento");
                return 0;
        }else if(salario > 2000 && salario <= 3000) {
                imposto = (salario - 2000) * 0.08;
        }else if(salario > 3000 && salario <= 4500) {
                imposto = (salario - 3000) * 0.18 + 80;
        }else if(salario > 4500) {
                imposto = (salario - 4500) * 0.28 + 350;
        }

        printf("R$ %.2lf\n", imposto);

        return 0;
}

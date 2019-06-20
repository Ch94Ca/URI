/*
   Uri 1048 - Aumento de Salario

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <math.h>

int main(void){

        double salario, novoSalario, aumento, porcentagem;

        scanf("%lf", &salario);

        if(salario > 0 && salario <= 400) {
                novoSalario = salario * 1.15;
                porcentagem = 15;
        }else if(salario > 400 && salario <= 800) {
                novoSalario = salario * 1.12;
                porcentagem = 12;
        }else if(salario > 800 && salario <= 1200) {
                novoSalario = salario * 1.10;
                porcentagem = 10;
        }else if(salario > 1200 && salario <= 2000) {
                novoSalario = salario * 1.07;
                porcentagem = 7;
        }else if(salario > 1200) {
                novoSalario = salario * 1.04;
                porcentagem = 4;
        }

        aumento = novoSalario - salario;

        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %.0lf %%\n", porcentagem);

        return 0;
}

/*
Uri 1008 - Salario

Autor: Carlos Henrique Silva Correia de Araujo
Aluno de Engenharia de Computacao - UFPB (1° Semestre)

*/

#include <stdio.h>

int main(void){

int numero, horasTrabalhadas;
float salarioHora, salarioMes;

scanf("%d %d %f", &numero, &horasTrabalhadas, &salarioHora);

salarioMes = horasTrabalhadas * salarioHora;

printf("NUMBER = %d\n", numero);
printf("SALARY = U$ %.2f\n", salarioMes);

return 0;
}

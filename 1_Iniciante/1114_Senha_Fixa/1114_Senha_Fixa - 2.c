/*
   Uri 1114 - Senha Fixa

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdio.h>

int main(void){

        int senha;

        do {

                scanf("%d", &senha);

                switch (senha) {

                case 2002:
                        puts("Acesso Permitido");
                        return 0;
                default:
                        puts("Senha Invalida");
                }

        } while(1);

        return 0;
}

/*
   Uri 1114 - Senha Fixa

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int entrada = -1;

        // Senha = 2002
        while(entrada !=  2002) {
                scanf("%d", &entrada);
                if(entrada != 2002) {
                        puts("Senha Invalida");
                }
        }

        puts("Acesso Permitido");

        return 0;
}

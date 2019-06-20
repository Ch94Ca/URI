/*
   Uri 1161 - Soma de Fatoriais

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

unsigned long long Fatorial(int x){

        unsigned long long fatorial = x;
        int i;

        if(x == 0) {

                return 1;

        } // End If

        fatorial = x--;

        for(i = x; i > 0; i--) {

                fatorial = fatorial * i;

        } // End For

        return fatorial;

} // End Fatorial

int main(void){

        unsigned long long fatorial, soma;
        int i, m, n;

        while(scanf("%d %d", &m, &n) != EOF){

                soma = Fatorial(m) + Fatorial(n);

                printf("%llu\n", soma);

        } // End While

        return 0;

} // End Main

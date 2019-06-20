/*
   Uri 1176 - Fibonacci em Vetor

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

unsigned long long FibonacciEmN(int x){

        unsigned long long i, fibonacci[90] = {0,1,1};

        for(i = 2; i <= x; i++) {

                fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

        } // End for

        return fibonacci[x];

} // End FibonacciEmN

int main(void){

        int vezes, i, x;

        scanf("%d", &vezes);

        for(i = 0; i < vezes; i++) {

                scanf("%d", &x);

                printf("Fib(%d) = %lld\n", x, FibonacciEmN(x));

        } // End For

        return 0;

} // End Main

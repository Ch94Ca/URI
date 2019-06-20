/*
   Uri 1555 - Funcoes

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int FuncaoRafael(unsigned int x, unsigned int y){

        unsigned int funcao;

        funcao = pow(3 * x, 2) + pow(y, 2);

        return funcao;

} // End FuncaoRafael

int FuncaoBeto(int x, int y){

        int funcao;

        funcao = 2 * pow(x,2) + pow(5 * y, 2);

        return funcao;

} // End FuncaoBeto

int FuncaoCarlos(int x, int y){

        int funcao;

        funcao = -100 * x + pow(y,3);

        return funcao;

} // End FuncaoCarlos

int Maior(int a, int b, int c){

        if(a > b && a > c) {

                return 0;

        }else if(b > a && b > c) {

                return 1;

        }else if(c > a && c > b) {

                return 2;

        } // End If

} // End Maior

int main(void){

        unsigned int vezes, x, y, i;

        scanf("%d", &vezes);

        for(i = 0; i < vezes; i++) {

                scanf("%d %d", &x, &y);

                switch (Maior(FuncaoRafael(x,y),FuncaoBeto(x,y),FuncaoCarlos(x,y))) {

                case 0:
                        puts("Rafael ganhou");
                        break;
                case 1:
                        puts("Beto ganhou");
                        break;
                case 2:
                        puts("Carlos ganhou");
                        break;

                } // End Switch

        } // End For

        return 0;
        
} // End Main

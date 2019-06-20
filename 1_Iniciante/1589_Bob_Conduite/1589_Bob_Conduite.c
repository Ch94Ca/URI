/*
   Uri 1589 - Bob Conduite

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int raio1, raio2, vezes, res;

        scanf("%d", &vezes);

        while(vezes > 0) {
                scanf("%d %d", &raio1, &raio2);
                res = raio1 + raio2;
                printf("%d\n", res);
                vezes = vezes - 1;
        }


        return 0;
}

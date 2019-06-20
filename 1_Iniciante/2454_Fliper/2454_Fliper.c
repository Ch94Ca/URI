/*
   Uri 2454 - Fliper

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main (void)
{
        int p, r;
        char s;

        scanf("%d %d", &p, &r);

        if (p == 0)
        {
                puts("C");
        }
        else
        {
                if (r == 0)
                {
                        puts("B");
                }
                else
                {
                        puts("A");
                }
        }

        return 0;
}

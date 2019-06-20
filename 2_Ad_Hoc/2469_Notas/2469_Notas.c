/*
 *   Uri 2469 - Notas
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

 #include <stdio.h>
 #include <stdlib.h>

int main(){

        int nAlunos, nota, maior = 0, iMaior, notas[150] = {0}, i;

        scanf("%d", &nAlunos);

        for(i = 0; i < nAlunos; i++) {

                scanf("%d", &nota);
                notas[nota]++;

        } // End For

        for(i = 0; i < 150; i++) {

                if(notas[i] >= maior) {

                        maior = notas[i];
                        iMaior = i;

                } // End If

        } // End For

        printf("%d\n", iMaior);

        return 0;

} // End Main

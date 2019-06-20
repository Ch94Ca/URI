/*
 *   URI 1548 - Fila do Recreio
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Troca(int *a, int *b){

        int aux;

        aux = *a;
        *a = *b;
        *b = aux;

} // End Troca

int main(void){

        int vezes;

        scanf("%d", &vezes);

        while(vezes--) {

                int nAlunos, *notas, *notasOrdenadas, quantidade = 0, i, j;

                scanf("%d", &nAlunos);

                notas = (int *) malloc((nAlunos) * sizeof(int));

                notasOrdenadas = (int *) malloc((nAlunos) * sizeof(int));

                for(i = 0; i < nAlunos; i++) {

                        scanf("%d", &notas[i]);
                        notasOrdenadas[i] = notas[i];

                } // End For

                puts("Notas Originais");

                for(i = 0; i < nAlunos; i++) {

                        printf("%d\n", notas[i]);

                } // End For

                for(i = 0; i < nAlunos; i++) {

                        for(j = 0; j < nAlunos; j++) {

                                if(notasOrdenadas[j] < notasOrdenadas[i]) {

                                        Troca(&notasOrdenadas[i], &notasOrdenadas[j]);

                                } // End If

                        } // End For

                } // End For

                puts("Notas Ordenadas");

                for(i = 0; i < nAlunos; i++) {

                        printf("%d\n", notasOrdenadas[i]);

                } // End For

                for(i = 0; i < nAlunos; i ++){

                  if(notas[i] == notasOrdenadas[i]){

                    quantidade++;

                  } // End If

                } // End For

                printf("%d", quantidade);

        } // End While

        return 0;

} // End Main

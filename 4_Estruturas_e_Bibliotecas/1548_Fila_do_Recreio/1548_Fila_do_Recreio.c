/*
 *   URI 1548 - Fila do Recreio
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Troca(): Faz a troca de posição entre dois valores
 *
 * Parametros: (Valor A, Valor B)
 *
 */

void Troca(int *a, int *b){

        int aux;

        aux = *a;
        *a = *b;
        *b = aux;

} // End Troca

/*
 *
 * NaoMudou(): Compara dois Vetores e retorna a quantidade de valores identicos no mesmo indice
 *
 * Parametros: (Vetor A, Vetor B, Tamanho do Vetor)
 *
 * Retorno: Quantidade de valores que são identicos no mesmo indice do vetor
 *
 */

int NaoMudou(int arrA[], int arrB[], int arrTamanho){

        int quantidade = 0, i;

        for(i = 0; i < arrTamanho; i++) {

                if(arrA[i] == arrB[i]) {

                        quantidade++;

                } // End If

        } // End For

        return quantidade;

} // End NaoMudou

int main(void){

        int vezes;

        scanf("%d", &vezes);

        while(vezes--) {

                int nAlunos, *notas, *notasOrdenadas, i, j;

                scanf("%d", &nAlunos);

                notas = (int *) malloc((nAlunos) * sizeof(int));

                notasOrdenadas = (int *) malloc((nAlunos) * sizeof(int));

                for(i = 0; i < nAlunos; i++) {

                        scanf("%d", &notas[i]);
                        notasOrdenadas[i] = notas[i];

                } // End For

                for(i = 0; i < nAlunos; i++) {

                        for(j = 0; j < nAlunos; j++) {

                                if(notasOrdenadas[j] < notasOrdenadas[i]) {

                                        Troca(&notasOrdenadas[i], &notasOrdenadas[j]);

                                } // End If

                        } // End For

                } // End For

                printf("%d\n", NaoMudou(notas, notasOrdenadas, nAlunos));

        } // End While

        return 0;

} // End Main

/*
   Uri 2719 - Quantas Viagens Fara o Noel?

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int testes, qtPresentes, pesoMax, *pesoPresentes, pesoViagem, viagens;
        int i, j, k;

        scanf("%d", &testes);

        for (i = 0; i < testes; i++) {

                viagens = 1;
                pesoViagem = 0;

                scanf("%d", &qtPresentes);
                scanf("%d", &pesoMax);

                pesoPresentes = (int *) malloc((qtPresentes + 1) * sizeof(int));

                for(j = 0; j < qtPresentes; j++) {

                        scanf("%d", &pesoPresentes[j]);

                } // End For

                for(k = 0; k < qtPresentes; k++) {

                        pesoViagem = pesoViagem + pesoPresentes[k];

                        if(pesoViagem + pesoPresentes[k+1] > pesoMax) {

                                viagens++;
                                pesoViagem = 0;

                        } // End If

                } // End For

                printf("%d\n", viagens);

                free(pesoPresentes);

        } // End For

        return 0;
}

/*
 *   URI 1318 - Bilhetes Falsos
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

        int nBilhetes, nPessoas;

        while(scanf("%d %d", &nBilhetes, &nPessoas) && nBilhetes != 0 && nPessoas != 0) {

                int bilhete, *bilhetes, nFalsificados = 0, i;

                bilhetes = (int *) malloc((nBilhetes) * sizeof(int));

                for (i = 0; i < nPessoas; i++) {

                        scanf("%d", &bilhete);

                        bilhetes[bilhete - 1]++;

                } // End For

                for(i = 0; i < nBilhetes; i++) {

                        if(bilhetes[i] > 1) {

                                nFalsificados += 1;

                        } // End if

                } // End For

                printf("%d\n", nFalsificados);

        } // End While

        return 0;

} // End Main

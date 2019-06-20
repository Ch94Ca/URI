/*
 *   URI 2163 - O Despertar da Força
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */


#include <stdio.h>
#include <stdlib.h>

int main(void){

        int linhas, colunas, i, j, local[2]={0,0};

        scanf("%d %d", &linhas, &colunas);

        int arr[linhas][colunas];

        for(i = 0; i < linhas; i++) {

                for(j = 0; j < colunas; j++) {

                        scanf("%d", &arr[i][j]);

                } // End For

        } // End For

        for(i = 0; i < linhas; i++) {

                for(j = 0; j < colunas; j++) {

                        if(arr[i][j] == 42) {

                                if(arr[i-1][j-1] == 7 && arr[i-1][j] == 7 && arr[i-1][j+1] == 7
                                   && arr[i][j-1] == 7 && arr[i][j+1] == 7
                                   && arr[i+1][j-1] == 7 && arr[i+1][j] == 7 && arr[i+1][j+1] == 7){

                                        local[0] = i+1;
                                        local[1] = j+1;

                                        break;

                                } // End If

                        } // End If

                } // End For

        } // End For

        printf("%d %d\n", local[0], local[1]);

        return 0;

} // End Main

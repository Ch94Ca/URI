/*
 *   URI 1281 - Ida a Feira
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produtos {

        char produto[100];
        double valor;

}; // End Struct produtos

int main(){

        int vezes, quantidade, nProdutosDisp, nProdutosComprar, i, j;
        char listaDeCompras[100];
        double total;

        scanf("%d", &vezes);

        while(vezes--) {

                scanf("%d",&nProdutosDisp);

                struct produtos array[nProdutosDisp];

                for(i = 0; i < nProdutosDisp; i++) {

                        scanf("%s %lf", array[i].produto, &array[i].valor);

                } // End For

                scanf("%d", &nProdutosComprar);

                for(i = 0; i < nProdutosComprar; i++) {

                        scanf("%s %d", listaDeCompras, &quantidade);

                        for(j = 0; j < nProdutosDisp; j++) {

                                if(!strcmp(array[j].produto, listaDeCompras)) {

                                        total += quantidade * array[j].valor;
                                        break;

                                } // End If

                        } // End For

                } // End For

                printf("R$ %.2f\n", total);

                total = 0.0;

        } // End While

        return 0;

} // End Main

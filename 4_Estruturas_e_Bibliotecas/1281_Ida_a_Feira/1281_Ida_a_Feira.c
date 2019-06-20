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

int main(void){

        char produtos[51][51], listaDeCompras[51][51];
        int vezes, nProdutosDisp, nProdutosComprar, i, j;
        double precos[51], quantidades[51], total;

        scanf("%d", &vezes);

        while(vezes--) {

                scanf("%d", &nProdutosDisp);

                for(i = 0; i < nProdutosDisp; i++) {

                        scanf("%s", produtos[i]);
                        scanf("%lf", &precos[i]);

                } // End For

                scanf("%d", &nProdutosComprar);

                for(i = 0; i < nProdutosComprar; i++) {

                        scanf("%s", listaDeCompras[i]);
                        scanf("%lf", &quantidades[i]);

                } // End For

                for(i = 0, j = 0; i < nProdutosDisp; i++) {

                        for(j = 0; j < nProdutosComprar; j++) {

                                if(strstr(produtos[i], listaDeCompras[j])) {

                                        total += ( precos[i] * quantidades[j] );

                                } // End If

                        } // End For

                } // End For

                printf("R$ %.2lf\n", total);

                total = 0;

                memset(produtos, 0, sizeof produtos);
                memset(listaDeCompras, 0, sizeof listaDeCompras);
                memset(precos, 0, sizeof precos);
                memset(quantidades, 0, sizeof quantidades);

        } // End While

        return 0;

} // End Main

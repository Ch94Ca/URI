/*
 *   Uri 1554 - Bilhar N+1
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *
 * DistanciaEntrePontos(): Calcula a distancia entre 2 pontos A = [x1, y1] e B = [x2, y2]
 *
 * Parametros: (x1, y1, x2, y2)
 *
 *            x1 e y1: coordenadas x e y do ponto A
 *            x2 e y2: coordenadas x e y do ponto B
 *
 * Retorno: A funçao retorna a distancia entre os dois pontos, calculada por:
 *
 *                 Raiz de ( (x2 - x1)² + (y2 - y1)² )
 *
 */

long double DistanciaEntrePontos(int x1, int y1, int x2, int y2){

        long double distancia;

        distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        return distancia;

} // End DistanciaEntrePontos

int main(void){

        int x1, y1, x2, y2, i, vezes, nBolas, bolaMenor;
        long double distancia, menor;

        scanf("%d", &vezes);

        while(vezes--) {

                scanf("%d", &nBolas);

                scanf("%d %d", &x1, &y1);

                menor = 999999999;

                for(i = 1; i <= nBolas; i++) {

                        scanf("%d %d", &x2, &y2);

                        distancia = DistanciaEntrePontos(x1, y1, x2, y2);

                        if(distancia < menor && distancia != menor) {

                                menor = distancia;

                                bolaMenor = i;

                        } // End If

                } // End For

                printf("%d\n", bolaMenor);

        } // End While

        return 0;

} // End Main

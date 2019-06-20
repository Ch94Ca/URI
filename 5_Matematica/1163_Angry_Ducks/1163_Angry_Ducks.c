/*
 *   Uri 1163 - Angry Ducks
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159 // Definição de PI
#define G 9.80665 // Definiçao da Acel. Gravitacional padrão

/*
 *
 * DistanciaMaxProjetil(): Calcula a distancia máxima de um projetil lançado na horizontal
 *
 * Parametros: (Altura Inicial, Angulo, Velocidae)
 *
 *            Altura Inicial: Altura Inicial do Projetil
 *            Angulo: Angulo de Disparo do Projetil
 *            Velocidade: Velocidade de disparo do Projetil
 *
 * Retorno: A funçao retorna a distancia maxima alacançada pelo projetil:
 *
 *        Formula de Movimento Obliquio Horizontal:
 *
 *          PI = 3.14159
 *          G = 9.80665
 *
 *          0 - O angulo deve ser convertido de Graus para Radianos com:
 *
 *              ( angulo * pi ) / 180
 *
 *          1 - Calcula o Seno e Cosseno do angulo convertido
 *
 *          2 - Determina a altura maxima do movimento com:
 *
 *              (velocidade * sen)² / (2 * G)
 *
 *          3 - Soma a altura inicial do projetil com a altura maxima
 *
 *          4 - Determina os vetores de velocidade do eixo X (VoX) e eixo & (VoY) com:
 *
 *              VoX = velocidade * cos;
 *              voY = velocidade * sen;
 *
 *          5 - A distancia maxima do projetil será calculada por:
 *
 *              ( VoX * VoY ) / G + (VoX * raiz quadrada de ( ( (altura inicial + altura maxima) * 2) / G )
 *
 */

long double DistanciaMaxProjetil(double alturaInicial, double angulo, double velocidade){

        long double alturaMaxima, sen, cos, somaAltura, voX, voY, distanciaMax;

        sen = sinl(angulo); // Calcula o Seno do angulo
        cos = cosl(angulo); // Calcula o Cosseno do angulo

        alturaMaxima = pow(velocidade * sen, 2) / (2 * G);

        somaAltura = alturaInicial + alturaMaxima;

        voX = velocidade * cos;

        voY = velocidade * sen;

        distanciaMax = ( (voX * voY) / G ) + ( voX * sqrt( (somaAltura * 2) / G ));

        return distanciaMax;

} // End DistanciaMaxProjetil

int Acertou(int inicioNlogonia, int fimNlogonia, long double distanciaMax){

        if(distanciaMax >= inicioNlogonia && distanciaMax <= fimNlogonia) {

                return 1;

        }else{

                return 0;

        } // End If

} // End Acertou

int main(void){

        int inicioNlogonia, fimNlogonia, tentativas;
        double alturaInicial, angulo, velocidade, distanciaMax;

        while(scanf("%lf %d %d %d", &alturaInicial, &inicioNlogonia, &fimNlogonia, &tentativas) != EOF) {

                while(tentativas--){

                        scanf("%lf %lf", &angulo, &velocidade);

                        // Converte o Angulo de Graus para Radianos
                        angulo = (angulo * PI) / 180;

                        distanciaMax = DistanciaMaxProjetil(alturaInicial, angulo, velocidade);

                        if(Acertou(inicioNlogonia, fimNlogonia, distanciaMax)) {

                                printf("%.5lf -> DUCK\n", distanciaMax);

                        }else{

                                printf("%.5lf -> NUCK\n", distanciaMax);

                        } // End If

                } // End While

        } // End While

        return 0;

} // End Main

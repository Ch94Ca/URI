/*
 *   Uri 2569 - A Bruxa do 7 x 1
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LimpaString(char *str){

        memset(str, 0, strlen(str));

} // End LimpaString

int main(){

        char operacao[20], operador, n1[20], n2[20], resultado[20];
        int i, j, k, valor;

        while(fgets(operacao, 20, stdin) != NULL) {

                for(i = 0; i < strlen(operacao); i++) {

                        if(operacao[i] == '7') operacao[i] = '0';

                } // End For

                for(i = 0; i < strlen(operacao); i++) {

                        if(operacao[i] == '+' || operacao[i] == '-' || operacao[i] == 'x' || operacao[i] == '/') {

                                operador = operacao[i];
                                break;

                        } // End If

                } // End For

                for(j = 0; j < i; j++) {

                        n1[j] = operacao[j];

                } // End For

                for(j = i, k = 0; j < strlen(operacao); j++) {

                        if(operacao[j] >= '0' && operacao[j] <= '9') {

                                n2[k] = operacao[j];

                                k++;

                        } // End If

                } // End For

                switch(operador) {

                case '+':
                        valor = atoi(n1) + atoi(n2);
                        break;
                case '-':
                        valor = atoi(n1) - atoi(n2);
                        break;
                case '/':
                        valor = atoi(n1) / atoi(n2);
                        break;
                case 'x':
                        valor = atoi(n1) * atoi(n2);
                        break;

                } // End Switch

                snprintf(resultado, sizeof(resultado), "%d", valor);

                for(i = 0; i < strlen(resultado); i++) {

                        if(resultado[i] == '7') resultado[i] = '0';

                } // End For

                printf("%d\n", atoi(resultado));

                LimpaString(operacao);
                LimpaString(n1);
                LimpaString(n2);

        } // End While

        return(0);

} // End Main

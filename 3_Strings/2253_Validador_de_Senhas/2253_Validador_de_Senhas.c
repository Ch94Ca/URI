/*
 *   Uri 2253 - Validador de Senhas
 *
 *   Autor: Carlos Henrique Silva Correia de Araujo
 *   Aluno de Engenharia de Computacao - UFPB (1° Semestre)
 *
 */

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

int ValidaTamanho(char *senha){

        if(strlen(senha) >= 6 && strlen(senha) <= 32) {
                return 1;
        }else{
                return 0;
        }   // End If

}   // ValidaTamanho

int ValidaMaiuscula(char *senha, int tamanho){

        while(*senha) {

                if(*senha >= 'A' && *senha <= 'Z') {
                        return 1;
                }   // End If

                *senha++;

        }   // End While

        return 0;

}   // ValidaMaiuscula

int ValidaMinuscula(char *senha, int tamanho){

        while(*senha) {

                if(*senha >= 'a' && *senha <= 'z') {
                        return 1;
                }   // End If

                *senha++;

        }   // End While

        return 0;

}   // ValidaMaiuscula

int ValidaCaracteres(char *senha, int tamanho){

        while(*senha) {

                if(*senha >= 'A' && *senha <= 'Z'
                   || *senha >= 'a' && *senha <= 'z'
                   || *senha >= '0' && *senha <= '9') {
                }else{
                        return 0;
                }     // End If

                *senha++;

        }   // End While

        return 1;

}   // ValidaMaiuscula

int ValidaNumero(char *senha, int tamanho){

        while(*senha) {

                if(*senha >= '0' && *senha <= '9') {
                        return 1;
                }   // End If

                *senha++;

        }   // End While

        return 0;

}   // ValidaNumero

int main(void){

        int vezes, leds, i, soma = 0;
        char senha[102];

        while(fgets(senha, 102, stdin) != NULL) {

                for(i = 0; senha[i] >= ' '; i++);

                senha[i] = '\0';

                leds = 0;

                if(ValidaTamanho(senha) == 1 &&
                   ValidaMaiuscula(senha, strlen(senha)) == 1 &&
                   ValidaMinuscula(senha, strlen(senha)) == 1 &&
                   ValidaCaracteres(senha, strlen(senha)) == 1 &&
                   ValidaNumero (senha, strlen(senha)) == 1) {

                        puts("Senha valida.");

                }else{

                        puts("Senha invalida.");

                }   // End If

        }   // End While

        return 0;

}   // End Main

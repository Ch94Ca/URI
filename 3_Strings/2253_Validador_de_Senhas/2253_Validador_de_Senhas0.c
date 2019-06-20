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

int ValidaSenha(char *senha, int tamanho){

        int maiuscula, minuscula, numero, invalida, i;

        if(tamanho >= 6 && tamanho <= 32) {

                for(i=0, invalida=0, maiuscula=0, minuscula=0, numero; i < tamanho; i++) {
                        if(senha[i] >= 'a' && senha[i] <= 'z') {

                                minuscula=1;

                        }else
                        if(senha[i] >= 'A' && senha[i] <= 'Z') {

                                maiuscula=1;

                        }else
                        if(senha[i] >= '0' && senha[i] <= '9') {

                                numero=1;

                        }else{
                                invalida=1;
                                break;
                        } // End If

                } // End For

                if(invalida || !minuscula || !maiuscula || !numero) {

                        return 0;

                }else{
                        return 1;
                } // End If
        }else

                return 0;


} // End Valida Senha

int main(void){

        char senha[102];
        int i;

        while(fgets(senha, 102, stdin) != NULL) {

                for(i=0; senha[i] >= ' '; i++);

                senha[i] = '\0';

                if(ValidaSenha(senha, strlen(senha)) == 1) {

                        puts("Senha valida.");

                } else{

                        puts("Senha invalida.");

                } // End If

        } // End While

        return 0;
}

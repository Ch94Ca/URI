/*
   Uri 1441 - Sequencias de Granizo

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

*/

#include <stdio.h>

int main(void){

        int entrada, maior;

        while(1) {
                scanf("%d",&entrada);
                if(entrada == 0) {
                        return 0;
                }

                maior=entrada;

                while(entrada > 1 ) {
                        if(entrada % 2 != 0) {
                                entrada = entrada * 3 + 1;
                        }
                        else if(entrada %2 == 0) {
                                entrada = entrada / 2;
                        }
                        if(entrada >= maior) {
                                maior = entrada;
                        }
                }
                printf("%d\n",maior);
        }
        return 0;
}

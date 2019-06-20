/*
   Uri 1101 - Sequencia de Numeros e Soma

   Autor: Carlos Henrique Silva Correia de Araujo
   Aluno de Engenharia de Computacao - UFPB (1° Semestre)

 */

#include <stdio.h>

int main(void){

        int a,b,i,soma=0;

        while(1) {
                scanf("%d%d", &a, &b);
                if(a<=0 || b<=0) {
                        return 0;
                }else{
                        soma=0;
                        if(a<b) {
                                for(i=a; i<=b; i++) {
                                        printf("%d ",i);
                                        soma+=i;
                                }
                                printf("Sum=%d\n",soma);
                        }
                        else if(a>b) {
                                for(i=b; i<=a; i++) {
                                        printf("%d ",i);
                                        soma+=i;
                                }
                                printf("Sum=%d\n",soma);
                        }
                }
        }
        return 0;
}

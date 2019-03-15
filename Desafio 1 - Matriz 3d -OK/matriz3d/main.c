#include <stdio.h>
#include <stdlib.h>

int main(){

    int linha, coluna , plano, i , j ,k , razao;
    int cont = 1;

    printf("Digite a quantidade de Linhas , Colunas , Planos e Razao :\n");
    printf("\n");
    scanf("%d%d%d%d", &linha,&coluna,&plano,&razao);

    printf("\n");

    printf("\n");

        for(i=0;i<plano;i++){
            for(j=0;j<linha;j++){
                for(k=0;k<coluna;k++){

                    printf("%d\t ",cont);

                    cont+=razao;
                }
                printf(" \n");
            }
            printf(" \n");
            printf(" \n");
        }
}

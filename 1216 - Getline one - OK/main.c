#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma=0, pega;
    char nome[100];
    int cont = 0;
    int t =3;

    while(scanf(" %[^(\n)]s",nome) != EOF){

        scanf("%d",&pega);
        cont++;
        soma +=pega;
    }
    double resposta = (double) soma/cont;

    printf("%.1f\n",resposta);
}
